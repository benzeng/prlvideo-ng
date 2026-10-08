
undefined8 FUN_100c68260(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  ulong uVar1;
  undefined1 local_f8 [216];
  
  if (((param_4 == 0) && (uVar1 = FUN_100c6f890(param_1), (uVar1 & 0xf0007) != 4)) &&
     (uVar1 = FUN_100c6f890(param_1), (uVar1 & 0xf0007) != 3)) {
    FUN_100c17f40(param_2,local_f8);
    FUN_100c18090(local_f8,*(undefined8 *)(param_1 + 0x78));
    _OPENSSL_cleanse(local_f8,0xd8);
    return 1;
  }
  FUN_100c17f40(param_2,*(undefined8 *)(param_1 + 0x78));
  return 1;
}

