
undefined1
FUN_10078c4f0(long param_1,undefined8 param_2,long param_3,long param_4,uint param_5,char param_6)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  undefined1 uVar6;
  uint uVar7;
  
  uVar2 = (uint)param_3 & 0xfff;
  uVar7 = 0x1000 - uVar2;
  if (uVar2 + param_5 < 0x1001) {
    uVar7 = param_5;
  }
  uVar5 = (ulong)uVar7;
  if (*(int *)(param_1 + 0x18) - 1U < 3) {
    uVar6 = 1;
    uVar7 = param_5;
    if (param_5 != 0) {
      do {
        lVar3 = (**(code **)(param_1 + 0x20))(param_1,param_2,param_3,0);
        iVar4 = (int)uVar5;
        if (lVar3 == 0) {
          if (param_6 == '\0') {
            FUN_1008e3970("","va2pa",0,"failed to translate memMode=%u adrr=0x%llx cr3=0x%llx",
                          *(undefined4 *)(param_1 + 0x18),param_3,param_2);
            return 0;
          }
        }
        else {
          cVar1 = (**(code **)(param_1 + 8))(param_4,uVar5,lVar3);
          if ((cVar1 == '\0') && (param_6 == '\0')) {
            FUN_1008e3970("","va2pa",0,"failed to read phyadrr=0x%llx size=0x%x",lVar3,param_5);
            return 0;
          }
        }
        uVar2 = uVar7 - iVar4;
        param_3 = param_3 + uVar5;
        param_4 = param_4 + uVar5;
        uVar5 = (ulong)uVar2;
        if (0xfff < uVar2) {
          uVar5 = 0x1000;
        }
        uVar7 = uVar7 - iVar4;
      } while (uVar7 != 0);
      uVar6 = 1;
    }
  }
  else {
    uVar6 = 0;
    FUN_1008e3970("","va2pa",0,"Memory mode is not initialized");
  }
  return uVar6;
}

