
void FUN_100311360(undefined8 *param_1,char param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  lVar2 = param_1[0x14cf];
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x18) != 0)) {
    if (param_2 == '\0') {
      uVar3 = *(undefined8 *)(lVar2 + 0x10);
      *(long *)(lVar2 + 0x10) = *(long *)(lVar2 + 0x18);
      *(undefined8 *)(lVar2 + 0x18) = uVar3;
      puVar5 = DAT_1011c4a88;
      for (puVar6 = *(undefined8 **)(lVar2 + 0x20); puVar6 != (undefined8 *)0x0;
          puVar6 = (undefined8 *)puVar6[7]) {
        uVar1 = *(undefined4 *)((long)puVar6 + 0x2c);
        *(undefined4 *)((long)puVar6 + 0x2c) = *(undefined4 *)(puVar6 + 6);
        *(undefined4 *)(puVar6 + 6) = uVar1;
        FUN_1002adb30(*param_1,*puVar6);
        FUN_100301c10(puVar6[1]);
        (*(code *)DAT_1011c4a88[0x5b])(*DAT_1011c4a88);
      }
    }
    else {
      puVar5 = (undefined8 *)FUN_1002adb30(*param_1,param_1[0x14cd]);
      FUN_1003021b0(param_1 + 7,*(undefined4 *)((long)param_1 + 0xa694),1);
      FUN_1003020b0(param_1 + 7,*(undefined4 *)(param_1 + 0x14d3),1);
      cVar4 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0xc11);
      if (cVar4 == '\0') {
        FUN_100311540(param_1,0,0,*(undefined4 *)(lVar2 + 8),*(undefined4 *)(lVar2 + 0xc),0,0,
                      *(undefined4 *)(lVar2 + 8),*(undefined4 *)(lVar2 + 0xc),0x4000,0x2600);
      }
      else {
        (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0xc11);
        FUN_100311540(param_1,0,0,*(undefined4 *)(lVar2 + 8),*(undefined4 *)(lVar2 + 0xc),0,0,
                      *(undefined4 *)(lVar2 + 8),*(undefined4 *)(lVar2 + 0xc),0x4000,0x2600);
        (*(code *)DAT_1011c4a88[0x49])(*DAT_1011c4a88,0xc11);
      }
      FUN_100301c10(param_1[0x14ce]);
      (*(code *)DAT_1011c4a88[0x5b])(*DAT_1011c4a88);
    }
    FUN_1002adb30(*param_1,puVar5);
    return;
  }
  return;
}

