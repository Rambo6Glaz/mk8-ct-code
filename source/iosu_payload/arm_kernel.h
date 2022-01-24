static const unsigned char arm_kernel_bin[] = {
    0xea, 0x00, 0x00, 0x10, 0xe3, 0x50, 0x00, 0x15, 0xe5, 0x2d, 0xe0, 0x04, 0xe5, 0x9f, 0xe0, 0x14, 0x03, 0xe0, 0x30, 0x00, 0x03, 0xe0, 0x20, 0x00, 0x11, 0xc2, 0x20, 0xd0, 0xe1,
    0xa0, 0xc0, 0x0e, 0xe4, 0x9d, 0xe0, 0x04, 0xe1, 0x2f, 0xff, 0x1c, 0x08, 0x12, 0x60, 0xa8, 0xe3, 0xa0, 0x30, 0x00, 0xe1, 0x53, 0x00, 0x02, 0x01, 0x2f, 0xff, 0x1e, 0xe7, 0xd1,
    0xc0, 0x03, 0xe7, 0xc0, 0xc0, 0x03, 0xe2, 0x83, 0x30, 0x01, 0xea, 0xff, 0xff, 0xf9, 0xe9, 0x2d, 0x41, 0xf0, 0xeb, 0x00, 0x00, 0x77, 0xe5, 0x9f, 0x71, 0x84, 0xe5, 0x9f, 0x51,
    0x84, 0xe1, 0xa0, 0x60, 0x00, 0xeb, 0x00, 0x00, 0x7c, 0xe1, 0xa0, 0x40, 0x00, 0xeb, 0x00, 0x00, 0x75, 0xe3, 0x84, 0x00, 0xc0, 0xeb, 0x00, 0x00, 0x7a, 0xe3, 0xc6, 0x0a, 0x01,
    0xe3, 0xc0, 0x00, 0x05, 0xeb, 0x00, 0x00, 0x6e, 0xe5, 0x9f, 0x31, 0x60, 0xe5, 0x9f, 0x21, 0x60, 0xe5, 0x83, 0x7a, 0x24, 0xe2, 0x83, 0x39, 0x06, 0xe1, 0xa0, 0x00, 0x05, 0xe5,
    0x83, 0x2a, 0xac, 0xe5, 0x9f, 0x11, 0x50, 0xe3, 0xa0, 0x20, 0x38, 0xeb, 0xff, 0xff, 0xe2, 0xe5, 0x9f, 0x31, 0x48, 0xe5, 0x9f, 0x01, 0x48, 0xe5, 0x93, 0x2d, 0x18, 0xe5, 0x9f,
    0x31, 0x44, 0xe2, 0x81, 0x10, 0x38, 0xe5, 0x83, 0x20, 0x00, 0xe3, 0xa0, 0x20, 0x68, 0xeb, 0xff, 0xff, 0xda, 0xe3, 0xa0, 0x39, 0x52, 0xe2, 0x80, 0x0a, 0x31, 0xe5, 0x93, 0x20,
    0x00, 0xe5, 0x9f, 0x11, 0x28, 0xe2, 0x80, 0x0f, 0x57, 0xeb, 0xff, 0xff, 0xd4, 0xe5, 0x9f, 0x31, 0x20, 0xe3, 0xe0, 0x20, 0x00, 0xe5, 0x83, 0x24, 0x74, 0xe5, 0x9f, 0x31, 0x18,
    0xe5, 0x9f, 0x21, 0x18, 0xe5, 0x9f, 0x11, 0x18, 0xe5, 0x9f, 0x01, 0x18, 0xe5, 0x82, 0x3d, 0x6c, 0xe5, 0x82, 0x7d, 0x70, 0xe2, 0x42, 0x2a, 0x02, 0xe5, 0x82, 0x3a, 0x90, 0xe5,
    0x82, 0x7a, 0x94, 0xe5, 0x81, 0x0c, 0xac, 0xe5, 0x9f, 0x11, 0x00, 0xe5, 0x82, 0x3c, 0x44, 0xe5, 0x82, 0x7c, 0x48, 0xe2, 0x42, 0x29, 0x12, 0xe5, 0x82, 0x18, 0x18, 0xe5, 0x9f,
    0x20, 0xf0, 0xe1, 0xa0, 0x00, 0x06, 0xe5, 0x82, 0x3d, 0x68, 0xe5, 0x82, 0x3d, 0x34, 0xe5, 0x82, 0x34, 0x98, 0xe5, 0x9f, 0x20, 0xe0, 0xe2, 0x85, 0x5f, 0x59, 0xe5, 0x82, 0x37,
    0xe0, 0xe5, 0x82, 0x39, 0xc4, 0xe5, 0x82, 0x3b, 0xb0, 0xe5, 0x82, 0x3d, 0x40, 0xeb, 0x00, 0x00, 0x39, 0xe5, 0x9f, 0x10, 0xc8, 0xe5, 0x9f, 0x00, 0xc8, 0xe1, 0x2f, 0xff, 0x35,
    0xe5, 0x9f, 0x30, 0xc4, 0xe1, 0x2f, 0xff, 0x33, 0xe1, 0xa0, 0x00, 0x04, 0xeb, 0x00, 0x00, 0x3b, 0xe5, 0x9f, 0x40, 0xb8, 0xe3, 0xe0, 0x30, 0x00, 0xe3, 0xe0, 0x20, 0x00, 0xe3,
    0xa0, 0x10, 0x0b, 0xe3, 0xa0, 0x00, 0x15, 0xe1, 0x2f, 0xff, 0x34, 0xe3, 0xe0, 0x30, 0x00, 0xe3, 0xe0, 0x20, 0x00, 0xe3, 0xa0, 0x10, 0x0d, 0xe3, 0xa0, 0x00, 0x15, 0xe1, 0x2f,
    0xff, 0x34, 0xe3, 0xe0, 0x30, 0x00, 0xe3, 0xe0, 0x20, 0x00, 0xe3, 0xa0, 0x10, 0x0f, 0xe3, 0xa0, 0x00, 0x15, 0xe1, 0x2f, 0xff, 0x34, 0xe3, 0xe0, 0x30, 0x00, 0xe3, 0xe0, 0x20,
    0x00, 0xe3, 0xa0, 0x10, 0x10, 0xe3, 0xa0, 0x00, 0x15, 0xe1, 0x2f, 0xff, 0x34, 0xe3, 0xe0, 0x30, 0x00, 0xe3, 0xe0, 0x20, 0x00, 0xe3, 0xa0, 0x10, 0x16, 0xe3, 0xa0, 0x00, 0x15,
    0xe1, 0x2f, 0xff, 0x34, 0xe3, 0xa0, 0x00, 0x00, 0xe8, 0xbd, 0x81, 0xf0, 0xe1, 0x2f, 0xff, 0x1e, 0x08, 0x12, 0x00, 0x00, 0x08, 0x12, 0x90, 0x00, 0x08, 0x13, 0x50, 0x04, 0x08,
    0x13, 0x52, 0x64, 0x10, 0x16, 0xa0, 0x00, 0x10, 0x10, 0x01, 0x74, 0x00, 0x12, 0xf0, 0x00, 0x00, 0x14, 0x80, 0x04, 0x08, 0x1e, 0x20, 0x00, 0xe3, 0xa0, 0x00, 0x00, 0x08, 0x21,
    0x40, 0x00, 0x08, 0x1d, 0x40, 0x00, 0x20, 0x00, 0x47, 0x70, 0x20, 0x00, 0x20, 0x00, 0x12, 0x93, 0x00, 0x00, 0x08, 0x28, 0x10, 0x00, 0x00, 0x00, 0x40, 0x01, 0x08, 0x12, 0x98,
    0xbc, 0x08, 0x12, 0xdc, 0xf0, 0x08, 0x12, 0x60, 0xa8, 0xee, 0x11, 0x0f, 0x10, 0xe1, 0x2f, 0xff, 0x1e, 0xee, 0x01, 0x0f, 0x10, 0xe1, 0x2f, 0xff, 0x1e, 0xee, 0x17, 0xff, 0x7a,
    0x1a, 0xff, 0xff, 0xfd, 0xe3, 0xa0, 0x00, 0x00, 0xee, 0x07, 0x0f, 0x9a, 0xe1, 0x2f, 0xff, 0x1e, 0xe1, 0x0f, 0x00, 0x00, 0xe1, 0x2f, 0xff, 0x1e, 0xe1, 0x29, 0xf0, 0x00, 0xe1,
    0x2f, 0xff, 0x1e, 0xe9, 0x2d, 0x40, 0x30, 0xe1, 0xa0, 0x40, 0x00, 0xeb, 0x00, 0x39, 0xda, 0xe5, 0x9f, 0x30, 0x1c, 0xe1, 0xa0, 0x50, 0x00, 0xe1, 0xa0, 0x00, 0x04, 0xe1, 0x2f,
    0xff, 0x33, 0xe1, 0xa0, 0x40, 0x00, 0xe1, 0xa0, 0x00, 0x05, 0xeb, 0x00, 0x39, 0xd8, 0xe1, 0xa0, 0x00, 0x04, 0xe8, 0xbd, 0x80, 0x30, 0xff, 0xff, 0xe3, 0xec, 0xe9, 0x2d, 0x40,
    0x30, 0xe5, 0x8d, 0xe0, 0x04, 0xe5, 0x8d, 0xc0, 0x08, 0xe5, 0x8d, 0x40, 0x0c, 0xe5, 0x8d, 0x60, 0x10, 0xeb, 0x00, 0xb2, 0xfd, 0xea, 0xff, 0xff, 0xc9, 0x10, 0x14, 0x03, 0xf8,
    0x10, 0x62, 0x4d, 0xd3, 0x10, 0x14, 0x50, 0x00, 0x10, 0x14, 0x50, 0x20, 0x10, 0x14, 0x00, 0x00, 0x10, 0x14, 0x00, 0x90, 0x10, 0x14, 0x00, 0x70, 0x10, 0x14, 0x00, 0x98, 0x10,
    0x14, 0x00, 0x84, 0x10, 0x14, 0x03, 0xe8, 0x10, 0x14, 0x00, 0x3c, 0x00, 0x00, 0x01, 0x73, 0x00, 0x00, 0x01, 0x76, 0xe9, 0x2d, 0x4f, 0xf0, 0xe2, 0x4d, 0xde, 0x17, 0xeb, 0x00,
    0xb9, 0x92, 0xe3, 0xa0, 0x10, 0x00, 0xe3, 0xa0, 0x20, 0x03, 0xe5, 0x9f, 0x0e, 0x68, 0xeb, 0x00, 0xb3, 0x20
};
static const unsigned int arm_kernel_bin_len = 772;
