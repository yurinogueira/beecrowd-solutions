main :: IO ()
main = do
    a <- getLine
    b <- getLine
    let x = (read a :: Int)
    let y = (read b :: Int)
    putStrLn $ "X = " ++ show(x + y)
