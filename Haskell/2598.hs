import Control.Monad (unless)

readInts :: IO [Int]
readInts = fmap (map read.words) getLine

forN :: Int -> IO()
forN n = do
    unless (n == 0) $ do
        nm <- readInts
        let nN = head nm
        let mM = nm !! 1
        let amount = nN `div` mM
        let residue = nN `mod` mM

        if residue > 0 then print(amount + 1)
        else print amount

        forN (n - 1)

main :: IO()
main = do
    nStr <- getLine
    let n = (read nStr :: Int)
    forN n
