
undefined1
FUN_100db4c00(long *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 uVar1;
  long lVar2;
  
  lVar2 = FUN_100db4670(param_1,0);
  if (lVar2 == 0) {
    uVar1 = 0;
    FUN_100df99c0("","AbstractFile",0,
                  "Can\'t open handle at PWrite(pData, uiSize, dwDone, uiOffset)");
  }
  else {
    uVar1 = (**(code **)(*(long *)param_1[2] + 0x48))
                      ((long *)param_1[2],param_2,param_3,param_4,param_5);
    (**(code **)(*param_1 + 0xd8))(param_1);
  }
  return uVar1;
}

