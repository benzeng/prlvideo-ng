
undefined8 FUN_1000455e0(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_1002a6120(param_2,1,0);
  if (lVar2 == 0) {
    uVar3 = 0xf0000000;
    if (0 < DAT_1011b55f8) {
      FUN_1008e3970("SGAH","vm",1,"Buffer #1[out] not available in request");
    }
  }
  else {
    uVar1 = (ulong)(uint)param_3[4] + 0x14;
    if (*(uint *)(lVar2 + 8) < uVar1) {
      uVar3 = 0xf0000009;
      if (0 < DAT_1011b55f8) {
        FUN_1008e3970("SGAH","vm",1,
                      "Size of buffer #1[out] is too small (%u bytes) to fit %u bytes from host for command %u with %u bytes of data"
                      ,(ulong)*(uint *)(lVar2 + 8),uVar1 & 0xffffffff,*param_3,param_3[4]);
      }
    }
    else {
      uVar3 = 0;
      FUN_1002a5a50(lVar2,0,param_3);
    }
  }
  return uVar3;
}

