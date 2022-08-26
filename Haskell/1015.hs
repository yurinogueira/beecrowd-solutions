import Text.Printf

readDoubles :: IO [Double]
readDoubles = fmap (map read.words) getLine

main :: IO ()
main = do
    xy1 <- readDoubles
    xy2 <- readDoubles
    let r = sqrt ((head xy2 - head xy1) ** 2 + (xy2 !! 1 - xy1 !! 1) ** 2)
    putStrLn $ printf "%.4f" r
