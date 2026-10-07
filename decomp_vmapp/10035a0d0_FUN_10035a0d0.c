
undefined8
FUN_10035a0d0(undefined8 *param_1,int param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  FUN_1002adb30(*param_1,param_1[1]);
  if ((undefined8 *)param_1[3] != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)param_1[3];
    puVar6 = param_1 + 3;
    do {
      while (puVar4 = puVar3, param_2 <= *(int *)(puVar4 + 4)) {
        puVar3 = (undefined8 *)*puVar4;
        puVar6 = puVar4;
        if ((undefined8 *)*puVar4 == (undefined8 *)0x0) goto LAB_10035a140;
      }
      puVar1 = puVar4 + 1;
      puVar4 = puVar6;
      puVar3 = (undefined8 *)*puVar1;
    } while ((undefined8 *)*puVar1 != (undefined8 *)0x0);
LAB_10035a140:
    if ((puVar4 != param_1 + 3) && (*(int *)(puVar4 + 4) <= param_2)) {
      lVar2 = puVar4[5];
      *(undefined4 *)(lVar2 + 0xbb60) = param_7;
      *(undefined4 *)(lVar2 + 0xbb64) = param_8;
      uVar5 = FUN_1003339e0(lVar2,param_3,param_4,param_5,param_6);
      return uVar5;
    }
  }
  return 0;
}

