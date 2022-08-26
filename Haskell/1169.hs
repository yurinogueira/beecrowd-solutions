import Control.Monad

forLoop :: Int -> Int -> IO()
forLoop i n = do
    when (i < n) $ do
        x <- getLine
        putStrLn $ show ((2 ^ (read x :: Int)) `div` 12000) ++ " kg"
        forLoop (i + 1) n

main :: IO ()
main = do
    n <- getLine
    let nInt = read n :: Int

    forLoop 0 nInt
