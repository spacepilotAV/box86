#ifdef GO

GO("libc.so.6", libc)
GO("libpthread.so.0", libpthread)
GO("librt.so.1", librt)
GO("libGL.so.1", libgl)
GO("libX11.so.6", libx11)

GO("ld-linux.so.2", ldlinux)

#else
#error Nope
#endif