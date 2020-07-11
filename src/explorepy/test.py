import explorepy
#explorepy.set_bt_interface('pybluez')
explore = explorepy.Explore()
explore.connect(device_name='Explore_143A')

explore.set_channels(15)
explore.visualize(bp_freq=(1, 40), notch_freq=50)
