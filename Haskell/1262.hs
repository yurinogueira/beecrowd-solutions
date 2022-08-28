import System.IO (isEOF)
import Control.Monad (unless)

main :: IO()
main = readUntilEOF

getChars :: String -> Int -> Int -> Char -> [Int]
getChars str i n cha = do
    if (i /= n) && (str !! i == cha)
        then do
            let x = getChars str (i + 1) n cha
            [head x + 1, x !! 1]
    else [0, i]


multipleRead :: String -> Int -> Int -> Int -> Int
multipleRead str p i n = do
    if i < n
        then do
            let actualChar = str !! i

            if actualChar == 'R'
                then do
                    let getR = getChars str i n 'R'
                    let repeated = head getR
                    let amount =  repeated `div` p
                    let residue = repeated `mod` p
                    let recursion = multipleRead str p (getR !! 1) n
                    if residue > 0
                        then 1 + amount + recursion
                    else amount + recursion
            else do
                let getW = getChars str i n 'W'
                let result = head getW
                result + multipleRead str p (getW !! 1) n
    else 0


readUntilEOF :: IO ()
readUntilEOF = do
    done <- isEOF
    unless done $ do
        r <- getLine
        pLine <- getLine
        let p = (read pLine :: Int)
        let rLen = length r

        print (multipleRead r p 0 rLen)
        readUntilEOF
