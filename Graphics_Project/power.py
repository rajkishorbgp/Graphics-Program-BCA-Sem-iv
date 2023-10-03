from sketchpy import canvas

obj = canvas.sketch_from_image('D:\\draw\\image.DNG')
width = int(img.shape[1])
obj.draw(threshold=127)
