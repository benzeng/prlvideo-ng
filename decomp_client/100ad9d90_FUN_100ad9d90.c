
void FUN_100ad9d90(long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  char cVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  cVar4 = (**(code **)(**(long **)(param_1 + 0x18) + 0x80))();
  lVar3 = DAT_102311848;
  if (cVar4 == '\0') {
    if ((DAT_102311848 != 0) && (DAT_102311848 != param_1)) {
      cVar4 = (**(code **)(**(long **)(DAT_102311848 + 0x18) + 0x80))();
      if (cVar4 != '\0') {
        cVar4 = (**(code **)(**(long **)(lVar3 + 0x18) + 0x78))();
        if (cVar4 != '\0') {
          DAT_102311848 = 0;
          FUN_100ae3790(lVar3,0);
        }
      }
    }
    plVar1 = *(long **)(param_1 + 0x18);
    pcVar2 = *(code **)(*plVar1 + 0x70);
    uVar5 = FUN_100ad5aa0(*(undefined8 *)(param_1 + 0x30));
    uVar6 = FUN_100ad6030(*(undefined8 *)(param_1 + 0x30));
    cVar4 = (*pcVar2)(plVar1,0,uVar5,uVar6);
    if (cVar4 == '\0') {
      uVar7 = FUN_1001d50a0();
      uVar7 = FUN_1001d50d0(uVar7);
      FUN_1001e1740(uVar7,0x16);
      plVar1 = *(long **)(param_1 + 0x18);
      pcVar2 = *(code **)(*plVar1 + 0x70);
      uVar5 = FUN_100ad5aa0(*(undefined8 *)(param_1 + 0x30));
      uVar6 = FUN_100ad6030(*(undefined8 *)(param_1 + 0x30));
      cVar4 = (*pcVar2)(plVar1,0,uVar5,uVar6);
      if (cVar4 == '\0') {
        FUN_100df99c0("CHRCLIENT","ChrToolClient",0,"Failed to grab keyboard for Coherence!");
      }
    }
    if (cVar4 != '\0') {
      DAT_102311848 = param_1;
      FUN_100ae3790(param_1,1);
      return;
    }
  }
  return;
}

