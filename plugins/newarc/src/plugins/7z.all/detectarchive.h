typedef int (*DETECTARCHIVE)(const unsigned char *buffer, int size);

int IsTarHeader (const unsigned char *Data, int DataSize);
int IsRarHeader (const unsigned char *Data, int DataSize);
int IsZipHeader (const unsigned char *Data, int DataSize);
int IsArjHeader (const unsigned char *Data, int DataSize);
int IsCabHeader (const unsigned char *Data, int DataSize);
int IsLzhHeader (const unsigned char *Data, int DataSize);
