import Text.Printf

main :: IO ()
main = do
    r <- getLine
    let n = 3.14159
    let x = n * (read r :: Double) ^ 2
    putStrLn $ "A=" ++ printf "%.4f" x
