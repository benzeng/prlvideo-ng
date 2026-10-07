
undefined8 FUN_10051f8b0(undefined8 param_1,long param_2,uint param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = 0xf0000003;
  if (*(short *)(param_2 + 0x16) != 0) {
    lVar1 = FUN_1002a6120(param_2,0,1);
    if ((lVar1 != 0) && (uVar2 = 0xf0000009, param_3 <= *(uint *)(lVar1 + 8))) {
      uVar2 = 0;
    }
  }
  return uVar2;
}

