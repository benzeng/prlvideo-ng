
bool FUN_1007f7a50(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_10081ddd0(0x4b0,"s3_lib.c",0xbb1);
  if (lVar1 != 0) {
    ___bzero(lVar1,0x4b0);
    *(undefined8 *)(lVar1 + 0x150) = 0;
    *(undefined8 *)(lVar1 + 0x188) = 0;
    *(long *)(param_1 + 0x80) = lVar1;
    FUN_10081bc00(param_1);
    (**(code **)(*(long *)(param_1 + 8) + 0x10))(param_1);
  }
  return lVar1 != 0;
}

