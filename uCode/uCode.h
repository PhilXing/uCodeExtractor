
namespace uCode {
	using namespace System;
	//
	// Definition for Registry manipulation
	//
	#define APP_KEY							"uCodeExtractor"
	#define APP_VERSION_VALUE   			"AppVersion"
	#define APP_REGISTRY_VERSION			"0.1"

	#define PDB_FILE_VALUE			        "PdbFile"
	#define DESTINATION_PATH_VALUE			"DestinationPath"
	#define FILE_EXTENSION_VALUE			"DestinationFileExtension"

	#define MICROCODE_DEFAULT_TOTAL_SIZE	2048

	typedef struct {
	  UInt32  HeaderVersion;
	  UInt32  PatchId;
	  UInt32  Date;
	  UInt32  CpuId;
	  UInt32  Checksum;
	  UInt32  LoaderVersion;
	  UInt32  PlatformId;
	  UInt32  DataSize;   // if 0, then TotalSize = 2048, and TotalSize field is invalid
	  UInt32  TotalSize;  // number of bytes
	  UInt32  Reserved[3];
	} MICROCODE_IMAGE_HEADER;

	ref class uCodeHeaderPlus {
	public:
		UInt32 Offset;
		String ^FileNaming;

		UInt32  HeaderVersion;
		UInt32  PatchId;
		UInt32  Date;
		UInt32  CpuId;
		UInt32  Checksum;
		UInt32  LoaderVersion;
		UInt32  PlatformId;
		UInt32  DataSize;   // if 0, then TotalSize = 2048, and TotalSize field is invalid
		UInt32  TotalSize;  // number of bytes
		//UInt32  Reserved[3];
		UInt32  Reserved0;
		UInt32  Reserved1;
		UInt32  Reserved2;
	};
}
