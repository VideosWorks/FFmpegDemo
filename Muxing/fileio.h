#ifndef FILEIO_H
#define FILEIO_H
#include <QDebug>
#include <QFile>
#include "ffmpeg_muxer.h"
typedef struct _FileIO{
	const char * inputVideoFileName;
	const char * inputAudioFileName;
	const char * outputFileName;
	int width;
	int height;
    QFile videoFile, audioFile, outFile;
}FileIO;
static QDebug operator<< (QDebug dbg, const _FileIO & args);

extern void parseArgs(FileIO & fileIO, int argc, char *argv[]);
extern void outError(int number);
#endif // FILEIO_H
