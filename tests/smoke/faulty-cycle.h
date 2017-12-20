#ifndef __TESTS_SMOKE_FAULTY_CYCLE_H__
#define __TESTS_SMOKE_FAULTY_CYCLE_H__

// sbt:ScanChainConfig> runMain scanChainConfig.Main ../../../emulator/scan-chain.yaml --output-dir=../../../emulator/scan-chains --verbose --mask=0000000000000000 --stuck-at=0000000000000000 --probability=0.1 --seed=0 --cycle=0 --cycle-inject=0
#define reg_instret_LfsrInjector32 \
.word 0x000010a3; \
.word 0x030cbd0f; \
.word 0x19999999; \
.word 0x15a7cbab; \
.word 0x19999999; \
.word 0x7265ecb8; \
.word 0x19999999; \
.word 0xa91b8f4e; \
.word 0x19999999; \
.word 0x07d983fa; \
.word 0x19999999; \
.word 0xa6049d2f; \
.word 0x19999999; \
.word 0xcf934315; \
.word 0x19999999; \
.word 0xf301cf8b; \
.word 0x19999999; \
.word 0x91e14922; \
.word 0x19999999; \
.word 0xc09a13fc; \
.word 0x19999999; \
.word 0x8ed13ae6; \
.word 0x19999999; \
.word 0x9d61ccb9; \
.word 0x19999999; \
.word 0x21c6d586; \
.word 0x19999999; \
.word 0x3b1a8769; \
.word 0x19999999; \
.word 0xaf84c1d6; \
.word 0x19999999; \
.word 0xdc4b4703; \
.word 0x19999999; \
.word 0xa0613ad1; \
.word 0x19999999; \
.word 0x90c4ed91; \
.word 0x19999999; \
.word 0x94daafbb; \
.word 0x19999999; \
.word 0xd6381ffb; \
.word 0x19999999; \
.word 0x1cad09bf; \
.word 0x19999999; \
.word 0x443020de; \
.word 0x19999999; \
.word 0x964abb7c; \
.word 0x19999999; \
.word 0x2e2330b0; \
.word 0x19999999; \
.word 0x0102a0fd; \
.word 0x19999999; \
.word 0x96de08fa; \
.word 0x19999999; \
.word 0xe566bcc6; \
.word 0x19999999; \
.word 0xca42d203; \
.word 0x19999999; \
.word 0x9bf02969; \
.word 0x19999999; \
.word 0x6c0e3149; \
.word 0x19999999; \
.word 0xa49709a0; \
.word 0x19999999; \
.word 0xe7f2bc40; \
.word 0x19999999; \
.word 0xcbe6bf1a; \
.word 0x19999999; \
.word 0x7a781d90; \
.word 0x19999999; \
.word 0x439ce8f6; \
.word 0x19999999; \
.word 0x5f8f5c02; \
.word 0x19999999; \
.word 0x0823f78b; \
.word 0x19999999; \
.word 0xb4e05a00; \
.word 0x19999999; \
.word 0x1feff205; \
.word 0x19999999; \
.word 0x385586b4; \
.word 0x19999999; \
.word 0x98af8725; \
.word 0x19999999; \
.word 0xf6a8335e; \
.word 0x19999999; \
.word 0x5867ff20; \
.word 0x19999999; \
.word 0x70921c50; \
.word 0x19999999; \
.word 0x0f626346; \
.word 0x19999999; \
.word 0xf1d00c2d; \
.word 0x19999999; \
.word 0xf2b4f5f0; \
.word 0x19999999; \
.word 0x07b1e805; \
.word 0x19999999; \
.word 0x081b12e1; \
.word 0x19999999; \
.word 0x580f9afb; \
.word 0x19999999; \
.word 0x2f931efc; \
.word 0x19999999; \
.word 0x4de9ef9c; \
.word 0x19999999; \
.word 0x23c29b62; \
.word 0x19999999; \
.word 0x4bf0b540; \
.word 0x19999999; \
.word 0x2bcd4d55; \
.word 0x19999999; \
.word 0x6da712c8; \
.word 0x19999999; \
.word 0x3ebaf898; \
.word 0x19999999; \
.word 0x0325f41d; \
.word 0x19999999; \
.word 0xb770e98c; \
.word 0x19999999; \
.word 0x3af01d4f; \
.word 0x19999999; \
.word 0xf6c92da3; \
.word 0x19999999; \
.word 0xbe70399b; \
.word 0x19999999; \
.word 0x7acb933d; \
.word 0x19999999; \
.word 0x3851d9d4; \
.word 0x19999999; \
.word 0x60b420bb; \
.word 0x00000000; \
.word 0x00000000; \
.word 0x00000000; \
.word 0x00000000; \
.word 0x00000000; \
.word 0x00000000;

// sbt:ScanChainConfig> runMain scanChainConfig.Main ../../../emulator/scan-chain.yaml --output-dir=../../../emulator/scan-chains --verbose --mask=00000000ffffffff --stuck-at=00000000deadbeef --probability=0 --seed=0 --cycle=0 --cycle-inject=0
#define reg_cycle_stuckAt \
.word 0x000010a3; \
.word 0x257fdd78; \
.word 0x00000000; \
.word 0x15a7cbab; \
.word 0x00000000; \
.word 0x7265ecb8; \
.word 0x00000000; \
.word 0xa91b8f4e; \
.word 0x00000000; \
.word 0x07d983fa; \
.word 0x00000000; \
.word 0xa6049d2f; \
.word 0x00000000; \
.word 0xcf934315; \
.word 0x00000000; \
.word 0xf301cf8b; \
.word 0x00000000; \
.word 0x91e14922; \
.word 0x00000000; \
.word 0xc09a13fc; \
.word 0x00000000; \
.word 0x8ed13ae6; \
.word 0x00000000; \
.word 0x9d61ccb9; \
.word 0x00000000; \
.word 0x21c6d586; \
.word 0x00000000; \
.word 0x3b1a8769; \
.word 0x00000000; \
.word 0xaf84c1d6; \
.word 0x00000000; \
.word 0xdc4b4703; \
.word 0x00000000; \
.word 0xa0613ad1; \
.word 0x00000000; \
.word 0x90c4ed91; \
.word 0x00000000; \
.word 0x94daafbb; \
.word 0x00000000; \
.word 0xd6381ffb; \
.word 0x00000000; \
.word 0x1cad09bf; \
.word 0x00000000; \
.word 0x443020de; \
.word 0x00000000; \
.word 0x964abb7c; \
.word 0x00000000; \
.word 0x2e2330b0; \
.word 0x00000000; \
.word 0x0102a0fd; \
.word 0x00000000; \
.word 0x96de08fa; \
.word 0x00000000; \
.word 0xe566bcc6; \
.word 0x00000000; \
.word 0xca42d203; \
.word 0x00000000; \
.word 0x9bf02969; \
.word 0x00000000; \
.word 0x6c0e3149; \
.word 0x00000000; \
.word 0xa49709a0; \
.word 0x00000000; \
.word 0xe7f2bc40; \
.word 0x00000000; \
.word 0xcbe6bf1a; \
.word 0x00000000; \
.word 0x7a781d90; \
.word 0x00000000; \
.word 0x439ce8f6; \
.word 0x00000000; \
.word 0x5f8f5c02; \
.word 0x00000000; \
.word 0x0823f78b; \
.word 0x00000000; \
.word 0xb4e05a00; \
.word 0x00000000; \
.word 0x1feff205; \
.word 0x00000000; \
.word 0x385586b4; \
.word 0x00000000; \
.word 0x98af8725; \
.word 0x00000000; \
.word 0xf6a8335e; \
.word 0x00000000; \
.word 0x5867ff20; \
.word 0x00000000; \
.word 0x70921c50; \
.word 0x00000000; \
.word 0x0f626346; \
.word 0x00000000; \
.word 0xf1d00c2d; \
.word 0x00000000; \
.word 0xf2b4f5f0; \
.word 0x00000000; \
.word 0x07b1e805; \
.word 0x00000000; \
.word 0x081b12e1; \
.word 0x00000000; \
.word 0x580f9afb; \
.word 0x00000000; \
.word 0x2f931efc; \
.word 0x00000000; \
.word 0x4de9ef9c; \
.word 0x00000000; \
.word 0x23c29b62; \
.word 0x00000000; \
.word 0x4bf0b540; \
.word 0x00000000; \
.word 0x2bcd4d55; \
.word 0x00000000; \
.word 0x6da712c8; \
.word 0x00000000; \
.word 0x3ebaf898; \
.word 0x00000000; \
.word 0x0325f41d; \
.word 0x00000000; \
.word 0xb770e98c; \
.word 0x00000000; \
.word 0x3af01d4f; \
.word 0x00000000; \
.word 0xf6c92da3; \
.word 0x00000000; \
.word 0xbe70399b; \
.word 0x00000000; \
.word 0x7acb933d; \
.word 0x00000000; \
.word 0x3851d9d4; \
.word 0x00000000; \
.word 0x60b420bb; \
.word 0x00000000; \
.word 0xf56df778; \
.word 0x00000006; \
.word 0xfffffff8; \
.word 0x00000007; \
.word 0x00000000;

// sbt:ScanChainConfig> runMain scanChainConfig.Main ../../../emulator/scan-chain.yaml --output-dir=../../../emulator/scan-chains --verbose --mask=0000000000000000 --stuck-at=0000000000000000 --probability=0 --seed=0 --cycle=1 --cycle-inject=7
#define reg_frm_CycleInjector32 \
.word 0x000010a3; \
.word 0xc771f09e; \
.word 0x00000000; \
.word 0x15a7cbab; \
.word 0x00000000; \
.word 0x7265ecb8; \
.word 0x00000000; \
.word 0xa91b8f4e; \
.word 0x00000000; \
.word 0x07d983fa; \
.word 0x00000000; \
.word 0xa6049d2f; \
.word 0x00000000; \
.word 0xcf934315; \
.word 0x00000000; \
.word 0xf301cf8b; \
.word 0x00000000; \
.word 0x91e14922; \
.word 0x00000000; \
.word 0xc09a13fc; \
.word 0x00000000; \
.word 0x8ed13ae6; \
.word 0x00000000; \
.word 0x9d61ccb9; \
.word 0x00000000; \
.word 0x21c6d586; \
.word 0x00000000; \
.word 0x3b1a8769; \
.word 0x00000000; \
.word 0xaf84c1d6; \
.word 0x00000000; \
.word 0xdc4b4703; \
.word 0x00000000; \
.word 0xa0613ad1; \
.word 0x00000000; \
.word 0x90c4ed91; \
.word 0x00000000; \
.word 0x94daafbb; \
.word 0x00000000; \
.word 0xd6381ffb; \
.word 0x00000000; \
.word 0x1cad09bf; \
.word 0x00000000; \
.word 0x443020de; \
.word 0x00000000; \
.word 0x964abb7c; \
.word 0x00000000; \
.word 0x2e2330b0; \
.word 0x00000000; \
.word 0x0102a0fd; \
.word 0x00000000; \
.word 0x96de08fa; \
.word 0x00000000; \
.word 0xe566bcc6; \
.word 0x00000000; \
.word 0xca42d203; \
.word 0x00000000; \
.word 0x9bf02969; \
.word 0x00000000; \
.word 0x6c0e3149; \
.word 0x00000000; \
.word 0xa49709a0; \
.word 0x00000000; \
.word 0xe7f2bc40; \
.word 0x00000000; \
.word 0xcbe6bf1a; \
.word 0x00000000; \
.word 0x7a781d90; \
.word 0x00000000; \
.word 0x439ce8f6; \
.word 0x00000000; \
.word 0x5f8f5c02; \
.word 0x00000000; \
.word 0x0823f78b; \
.word 0x00000000; \
.word 0xb4e05a00; \
.word 0x00000000; \
.word 0x1feff205; \
.word 0x00000000; \
.word 0x385586b4; \
.word 0x00000000; \
.word 0x98af8725; \
.word 0x00000000; \
.word 0xf6a8335e; \
.word 0x00000000; \
.word 0x5867ff20; \
.word 0x00000000; \
.word 0x70921c50; \
.word 0x00000000; \
.word 0x0f626346; \
.word 0x00000000; \
.word 0xf1d00c2d; \
.word 0x00000000; \
.word 0xf2b4f5f0; \
.word 0x00000000; \
.word 0x07b1e805; \
.word 0x00000000; \
.word 0x081b12e1; \
.word 0x00000000; \
.word 0x580f9afb; \
.word 0x00000000; \
.word 0x2f931efc; \
.word 0x00000000; \
.word 0x4de9ef9c; \
.word 0x00000000; \
.word 0x23c29b62; \
.word 0x00000000; \
.word 0x4bf0b540; \
.word 0x00000000; \
.word 0x2bcd4d55; \
.word 0x00000000; \
.word 0x6da712c8; \
.word 0x00000000; \
.word 0x3ebaf898; \
.word 0x00000000; \
.word 0x0325f41d; \
.word 0x00000000; \
.word 0xb770e98c; \
.word 0x00000000; \
.word 0x3af01d4f; \
.word 0x00000000; \
.word 0xf6c92da3; \
.word 0x00000000; \
.word 0xbe70399b; \
.word 0x00000000; \
.word 0x7acb933d; \
.word 0x00000000; \
.word 0x3851d9d4; \
.word 0x00000000; \
.word 0x60b420bb; \
.word 0x0000000f; \
.word 0x00000000; \
.word 0x00000000; \
.word 0x00000000; \
.word 0x00000000; \
.word 0x00000000;

#endif  // __TESTS_SMOKE_FAULTY_CYCLE_H__
