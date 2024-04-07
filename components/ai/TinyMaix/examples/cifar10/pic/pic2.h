const unsigned char pic[32*32*3]={\
 62,116, 47,  60,111, 51,  64,113, 59,  68,119, 62,  74,127, 64,  79,132, 69,  82,133, 76,  89,134, 85,  94,136, 89,  97,136, 91, 104,143, 98, 100,142, 95, 100,145, 89, 102,146, 87, 106,145, 90, 113,146,101, 107,156, 88, 110,157, 95, 113,154,103, 118,157,112, 120,156,112, 120,157,111, 127,163,116, 126,162,115, 128,164,118, 130,166,120, 133,169,122, 136,174,122, 140,178,126, 142,178,131, 141,175,134, 140,172,137, 
 67,118, 51,  66,114, 56,  71,117, 64,  74,123, 67,  79,130, 68,  82,135, 72,  85,135, 77,  92,138, 85,  98,142, 89, 103,144, 93, 101,143, 95, 100,143, 92, 105,153, 94, 104,151, 88, 110,154, 95, 113,152,100, 113,159, 93, 114,158, 99, 116,158,105, 125,162,116, 127,164,118, 127,165,117, 133,170,120, 133,170,120, 134,170,123, 137,173,127, 139,175,129, 142,179,129, 144,181,131, 148,182,135, 147,179,138, 146,176,141, 
 72,116, 55,  73,115, 60,  76,119, 68,  81,126, 70,  84,133, 71,  88,137, 75,  90,138, 79,  96,141, 84, 102,145, 88, 104,146, 91, 108,149, 98, 116,159,108, 115,163,105, 107,156, 94, 104,152, 93, 109,155,102, 115,157, 96, 116,157, 99, 119,159,104, 128,165,115, 131,167,120, 131,168,118, 134,173,118, 134,173,118, 136,175,123, 138,176,128, 141,177,133, 144,179,135, 147,180,135, 148,181,136, 150,180,139, 149,177,141, 
 76,118, 57,  76,116, 61,  80,121, 70,  82,127, 71,  86,133, 71,  92,139, 77,  96,139, 82, 103,144, 87, 132,172,114, 117,153, 99, 120,153,109, 146,180,140, 149,185,143, 146,185,139, 122,163,118, 110,152,111, 118,158,100, 120,160,102, 125,165,107, 133,169,115, 136,171,121, 137,173,121, 136,175,119, 135,176,118, 139,180,123, 142,180,132, 145,181,139, 147,181,141, 150,183,139, 152,182,139, 154,182,139, 155,181,141, 
 78,122, 61,  78,121, 64,  81,125, 72,  83,128, 71,  87,133, 74,  93,139, 80, 101,141, 86, 109,145, 91, 153,187,133, 145,173,127, 124,145,113, 103,119,101, 101,120,103, 138,161,139, 151,179,156, 124,152,133, 121,160,104, 123,164,103, 129,170,109, 135,173,115, 137,172,122, 140,174,127, 139,177,125, 137,178,120, 139,182,125, 142,182,134, 145,182,142, 148,182,145, 151,183,142, 154,185,140, 157,184,140, 159,183,141, 
 80,127, 65,  78,126, 68,  80,129, 73,  81,131, 73,  86,134, 75,  94,139, 82, 102,141, 89, 109,145, 91, 121,151, 98, 141,164,120, 107,120, 96,  34, 38, 33,  19, 23, 24,  63, 71, 70, 138,153,149, 145,164,161, 121,164,107, 122,164,103, 129,171,106, 132,173,112, 136,171,121, 141,174,130, 139,175,128, 139,179,124, 140,182,127, 143,183,135, 145,183,141, 148,183,143, 149,184,140, 153,184,139, 157,184,140, 159,184,140, 
 77,128, 68,  76,127, 70,  78,130, 76,  79,133, 74,  84,136, 76,  90,140, 82,  99,141, 86, 106,145, 89,  90,125, 68, 110,136, 90,  82, 95, 71,  21, 22, 20,  12, 10, 16,  17, 21, 26,  80, 92, 92, 145,163,162, 127,173,121, 122,168,109, 126,172,106, 132,174,113, 136,172,125, 139,173,133, 139,173,132, 142,180,132, 142,184,131, 143,185,137, 145,185,143, 148,186,144, 152,188,142, 157,189,142, 159,188,142, 160,187,143, 
 75,126, 68,  74,127, 70,  76,131, 76,  75,133, 74,  81,138, 77,  90,141, 83,  93,143, 85,  99,146, 84,  97,140, 77, 109,142, 91,  71, 88, 61,   6, 12,  7,   5,  5, 11,   2,  9, 12,  27, 44, 41, 121,144,140, 133,179,137, 121,169,117, 122,171,109, 128,175,113, 135,173,123, 136,171,131, 136,170,133, 141,177,133, 141,181,133, 144,183,137, 146,185,140, 148,187,142, 151,189,141, 153,190,140, 158,190,143, 158,189,144, 
 76,126, 68,  76,129, 72,  77,132, 77,  76,134, 75,  78,137, 76,  84,140, 81,  89,143, 84,  93,146, 83,  92,144, 80, 106,148, 95,  81,106, 78,   0,  8,  5,   4,  6, 14,   1,  7, 12,   1, 19, 18,  90,114,112, 150,193,166, 122,167,128, 117,166,110, 127,175,116, 132,176,123, 131,170,125, 134,171,131, 138,177,132, 140,179,133, 142,181,135, 146,185,140, 148,187,141, 152,190,142, 153,191,141, 155,191,144, 155,190,146, 
 79,127, 68,  78,129, 72,  76,131, 76,  76,134, 75,  80,137, 76,  85,139, 80,  88,141, 84,  89,145, 86,  96,150, 90, 106,150,103,  68, 91, 69,   5, 10, 11,   3,  0, 10,   0,  0,  8,  25, 33, 40, 122,136,142, 162,196,186, 140,179,154, 125,171,125, 122,170,112, 123,169,110, 129,173,120, 134,174,126, 137,176,130, 139,178,132, 141,180,134, 145,184,139, 148,187,141, 150,190,142, 151,191,143, 152,191,145, 153,192,147, 
 81,127, 68,  78,127, 71,  77,129, 75,  80,133, 76,  82,136, 76,  85,136, 78,  89,139, 85,  91,144, 87,  94,147, 90, 100,141, 96,  49, 68, 47,   9,  4,  3,  17,  0,  7,  26,  8, 15,  65, 53, 59, 157,150,157, 165,186,188, 147,175,162, 137,172,138, 126,170,117, 127,174,112, 123,172,110, 126,171,114, 127,171,118, 137,177,129, 140,179,133, 146,183,137, 149,185,141, 149,188,143, 150,189,144, 150,191,146, 151,192,147, 
 81,126, 69,  77,126, 72,  78,127, 75,  82,133, 76,  84,135, 75,  87,135, 77,  89,138, 82,  92,143, 86,  98,148, 90, 107,143, 96,  53, 65, 35,  20,  4,  0,  62, 28, 22, 101, 62, 54, 114, 78, 70, 156,124,118, 145,152,155, 132,146,140, 131,155,131, 130,165,121, 120,167,105, 119,170,102, 125,175,111, 132,179,123, 134,177,126, 139,179,131, 145,182,136, 148,184,140, 149,185,143, 149,187,145, 149,190,145, 148,192,145, 
 77,124, 68,  75,122, 73,  77,125, 77,  81,131, 77,  84,135, 75,  88,134, 75,  90,138, 79,  92,143, 83,  93,144, 82, 104,142, 84,  70, 79, 36,  67, 45, 10, 130, 87, 54, 158,105, 72, 157,103, 72, 176,126, 98, 116,110,103, 109,107, 99, 116,126,109, 136,161,127, 123,163,108, 121,172,105, 118,170,106, 126,176,118, 131,177,125, 138,179,128, 144,182,132, 147,183,137, 148,183,143, 148,185,145, 148,188,146, 148,193,144, 
 72,121, 67,  73,121, 73,  74,123, 77,  78,130, 77,  83,134, 74,  86,135, 73,  87,138, 76,  88,143, 80,  94,148, 81, 104,145, 83,  86, 99, 43, 102, 81, 30, 156,109, 57, 162,102, 48, 169,109, 57, 190,130, 84, 126,109, 83,  88, 74, 56,  88, 85, 70, 110,123, 99, 124,157,113, 114,162,103, 118,170,110, 125,175,121, 127,175,123, 136,178,125, 143,181,129, 146,182,135, 148,182,142, 149,183,146, 149,188,143, 149,192,141, 
 70,119, 65,  69,119, 71,  71,122, 78,  74,127, 77,  81,132, 74,  84,135, 73,  84,138, 78,  82,141, 80,  83,143, 79,  99,146, 83,  93,111, 52,  93, 76, 19, 132, 88, 27, 159,100, 38, 178,115, 57, 182,119, 68, 135,111, 65,  84, 63, 32,  71, 58, 44,  82, 85, 69, 124,148,116, 117,159,111, 121,171,117, 120,171,121, 127,174,125, 133,177,124, 141,180,124, 146,182,130, 148,180,139, 149,182,145, 147,186,141, 147,191,138, 
 67,117, 63,  69,119, 71,  71,122, 78,  74,127, 77,  78,132, 73,  84,137, 74,  82,139, 78,  79,141, 81,  80,145, 83,  95,146, 86, 105,126, 71,  91, 78, 22, 108, 67,  5, 145, 88, 26, 171,108, 50, 179,116, 66, 147,119, 59, 110, 83, 46,  72, 53, 38,  66, 64, 53, 100,121, 96, 119,159,117, 117,167,119, 119,168,122, 126,174,126, 133,178,122, 140,180,122, 145,181,127, 147,179,138, 147,180,143, 148,184,140, 147,189,134, 
 67,115, 67,  68,114, 71,  75,121, 79,  77,124, 78,  76,125, 73,  85,136, 78,  81,137, 72,  82,140, 75,  83,143, 79,  86,141, 86,  94,136, 88,  77, 99, 51,  74, 70, 19, 119, 84, 28, 155, 93, 39, 171, 92, 41, 193,103, 49, 178,113, 52, 123, 89, 29,  77, 68, 25,  81, 87, 62, 117,142,116, 116,161,118, 116,172,113, 121,175,115, 133,177,124, 138,175,125, 141,177,130, 144,183,138, 139,182,137, 141,184,133, 145,188,131, 
 66,115, 65,  68,116, 68,  71,118, 72,  79,125, 78,  80,128, 76,  82,132, 74,  78,133, 70,  83,141, 76,  80,140, 79,  84,142, 84,  90,139, 87,  89,121, 67,  88, 97, 41, 103, 84, 27, 117, 71, 17, 136, 75, 25, 171, 99, 45, 189,131, 72, 182,143, 88, 129,107, 66,  87, 78, 51,  95,106, 80, 125,159,118, 116,166,112, 121,174,117, 127,173,120, 135,173,123, 138,174,127, 140,176,132, 139,180,135, 140,182,134, 140,185,128, 
 64,114, 60,  68,117, 65,  72,121, 71,  76,123, 74,  74,123, 69,  81,131, 73,  85,138, 75,  78,135, 72,  79,139, 78,  80,141, 83,  83,141, 83,  91,137, 78,  95,124, 61, 100,105, 44,  90, 73, 17,  94, 62, 13, 142,100, 47, 161,120, 65, 182,142, 90, 190,151,112, 114, 86, 56,  86, 78, 49, 124,138,102, 127,163,117, 125,170,121, 123,172,118, 132,177,121, 138,177,125, 137,174,128, 140,179,134, 139,181,133, 134,181,125, 
 58,113, 56,  61,116, 61,  69,121, 67,  78,129, 72,  75,125, 67,  77,128, 66,  79,132, 69,  81,138, 77,  80,140, 80,  75,139, 79,  75,140, 78,  86,144, 79,  91,138, 70, 102,131, 68,  94,104, 51,  83, 83, 35, 101, 90, 38, 136,113, 63, 181,142, 97, 198,154,113, 156,118, 83, 112, 91, 59,  95, 94, 60, 103,119, 85, 127,160,116, 127,171,118, 126,176,118, 131,178,122, 136,176,128, 139,175,131, 140,179,133, 131,177,125, 
 55,113, 58,  61,119, 64,  65,123, 65,  70,124, 64,  76,130, 65,  87,140, 73,  84,137, 70,  81,136, 73,  79,137, 78,  73,137, 77,  71,139, 74,  82,148, 77,  86,143, 74,  95,140, 77, 100,132, 77, 100,124, 76, 101,113, 65, 117,112, 67, 163,139, 97, 176,145,100, 161,135, 89, 178,162,120, 103, 93, 63,  64, 63, 35, 131,145,109, 138,171,120, 124,172,113, 123,174,116, 128,176,124, 129,171,124, 136,175,129, 135,176,125, 
 59,115, 66,  60,117, 66,  64,122, 64,  71,126, 63,  84,139, 70, 119,175,100, 121,176,103,  90,144, 77,  74,130, 71,  78,138, 78,  72,138, 73,  74,141, 72,  82,145, 76,  85,139, 79,  94,140, 87,  99,140, 89,  96,121, 77, 111,122, 82, 151,149,108, 142,137, 88, 141,142, 86, 158,161,112, 122,120, 86,  84, 77, 50, 134,133, 99, 145,166,117, 129,170,112, 118,172,113, 120,175,120, 120,167,118, 134,172,124, 138,174,127, 
 67,114, 75,  73,120, 74,  76,125, 73,  96,147, 87, 107,160, 87, 123,179, 98, 126,182,101,  94,149, 76,  73,128, 65,  77,135, 76,  73,136, 74,  72,136, 70,  80,143, 81,  82,140, 82,  86,141, 86,  75,127, 73,  58, 92, 51,  89,116, 77, 121,144,100, 133,160,104, 111,145, 80, 110,142, 85, 107,120, 82,  73, 71, 41, 114,108, 71, 133,145, 93, 132,165,108, 119,168,112, 116,171,116, 119,169,115, 128,169,118, 138,172,125, 
 98,129, 98, 138,171,134, 135,170,126, 144,184,129, 144,189,120, 119,171, 88, 104,159, 72,  83,140, 61,  77,133, 68,  72,130, 71,  75,135, 74,  76,139, 77,  81,142, 84,  77,136, 85,  83,140, 89,  58,115, 60,  78,120, 79,  89,129, 88,  83,127, 80,  96,149, 86, 101,163, 93, 105,159, 99, 105,142, 96, 109,125, 84,  76, 79, 33, 107,115, 62, 131,154,100, 124,163,111, 116,167,110, 121,172,114, 124,169,113, 135,170,120, 
165,182,155, 220,238,209, 209,231,196, 196,223,179, 167,204,142, 123,170, 91, 105,161, 72,  83,141, 60,  73,133, 63,  75,135, 71,  74,135, 71,  75,138, 76,  81,140, 89,  79,135, 92,  73,128, 81,  71,129, 75,  90,138, 96,  77,128, 84,  77,133, 80,  86,152, 87,  87,159, 89,  86,155, 94,  96,154,100, 116,155,103, 105,129, 71,  70, 84, 26,  98,114, 61, 127,156,107, 118,163,106, 117,168,106, 124,170,111, 135,171,117, 
194,203,177, 229,241,213, 228,242,214, 232,249,216, 201,230,181, 115,159, 88, 100,155, 70,  88,147, 66,  74,134, 64,  76,137, 71,  74,137, 68,  79,138, 77,  78,132, 85,  74,125, 88,  83,134, 96,  81,135, 88,  77,130, 86,  79,134, 87,  83,144, 88,  85,151, 86,  81,152, 86,  81,151, 90,  84,152, 93,  95,155, 91, 117,161, 92, 105,130, 68,  79, 94, 43, 118,142, 94, 128,169,112, 123,174,107, 121,166,103, 135,172,116, 
177,189,159, 210,222,194, 225,238,214, 230,244,220, 207,232,194, 144,182,122, 121,173, 96,  95,152, 77,  73,132, 64,  78,136, 71,  76,136, 66,  81,136, 73,  85,131, 88,  88,127,101, 109,149,121,  89,133, 94,  71,126, 79,  83,140, 89,  89,151, 91,  89,150, 86,  87,147, 86,  83,149, 90,  83,153, 92,  89,159, 88, 104,161, 86, 125,163, 97, 124,148, 94, 120,146, 98, 122,161,105, 119,165, 99, 125,167,102, 135,167,108, 
158,178,143, 148,166,135, 193,209,185, 230,244,226, 210,232,204, 189,223,176, 148,194,128,  96,148, 84,  86,137, 79,  86,138, 78,  87,138, 70,  94,139, 76,  75,110, 70,  71, 97, 79, 111,137,119, 111,141,112,  75,132, 81,  84,142, 87,  89,148, 87,  91,148, 87,  92,148, 89,  91,149, 91,  89,155, 90,  92,163, 90,  99,163, 87, 118,168, 98, 146,184,126, 125,161,107, 114,157,100, 140,185,122, 145,182,118, 135,163,103, 
161,191,150, 101,127, 91, 156,175,150, 226,239,223, 210,227,206, 222,249,210, 184,220,168, 123,161,111, 139,178,133, 134,175,124, 116,157, 95, 121,157, 97,  77,101, 66,  74, 91, 78,  98,114,103,  97,116, 95,  82,138, 85,  86,144, 85,  90,147, 84,  93,147, 87,  95,148, 91,  93,148, 91,  91,152, 88,  96,160, 88,  99,162, 88, 107,163, 92, 131,181,117, 122,168,109, 121,166,109, 156,197,139, 170,204,143, 159,188,125, 
182,215,171, 153,180,141, 188,207,180, 225,235,218, 204,215,195, 216,233,200, 206,230,188, 175,201,165, 200,225,197, 199,225,189, 155,186,131, 154,183,128, 101,120, 87, 105,116,106, 102,113,105,  80, 96, 78,  80,141, 85,  86,146, 85,  92,149, 86,  92,149, 88,  94,149, 92,  93,151, 92,  93,154, 88,  94,155, 87,  98,158, 88, 100,158, 87, 116,172,101, 116,167,100, 138,181,124, 177,216,161, 174,209,152, 148,184,118, 
193,223,182, 203,229,189, 214,229,198, 232,236,217, 233,234,214, 233,239,208, 220,232,196, 214,227,203, 222,235,221, 207,223,199, 148,169,124, 144,166,117, 113,128,100, 111,122,114, 128,140,134, 118,137,118,  79,145, 86,  85,148, 86,  91,151, 87,  95,151, 92,  93,152, 94,  93,156, 94,  95,157, 91,  96,154, 89,  97,155, 90, 107,167, 97, 113,172, 97, 122,172,102, 143,182,126, 183,218,168, 140,179,123, 116,163, 95, 
176,203,163, 210,231,192, 219,230,198, 233,232,212, 234,229,208, 230,230,200, 211,216,185, 218,222,203, 223,227,221, 222,232,215, 167,185,144, 125,145, 98,  81, 96, 68,  59, 69, 63, 120,134,128, 140,160,141,  84,154, 93,  83,148, 86,  89,149, 85,  95,153, 94,  94,156, 96,  91,156, 94,  93,157, 91,  93,153, 89, 114,171,110, 118,178,108, 111,169, 91, 115,163, 91, 158,193,137, 160,192,145, 109,151, 96, 100,155, 86, 
};
