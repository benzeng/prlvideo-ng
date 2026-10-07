
undefined8
FUN_1008a0d80(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,char param_7,undefined8 param_8)

{
  void *pvVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  undefined8 *local_48;
  undefined8 local_40;
  void *local_38;
  
  pvVar1 = (void *)*param_2;
  local_40 = 0;
  local_48 = (undefined8 *)0x0;
  local_38 = pvVar1;
  uVar5 = FUN_1008a5f70(&local_40,&local_38,param_3,&DAT_100be1650,param_5,param_6,(int)param_7,
                        param_8);
  if (0 < (int)uVar5) {
    puVar2 = (undefined8 *)*param_1;
    if (puVar2 != (undefined8 *)0x0) {
      FUN_10087cd20(puVar2[2]);
      FUN_100885590(*puVar2,FUN_1008a0c10);
      if (puVar2[3] != 0) {
        FUN_10081e1a0();
      }
      FUN_10081e1a0(puVar2);
      *param_1 = 0;
    }
    iVar3 = FUN_1008a0c50(&local_48,0);
    puVar2 = local_48;
    if ((iVar3 != 0) &&
       (iVar3 = FUN_10087cd60(local_48[2],(long)local_38 - (long)pvVar1), iVar3 != 0)) {
      _memcpy(*(void **)(puVar2[2] + 8),pvVar1,(long)local_38 - (long)pvVar1);
      iVar3 = FUN_100885600(local_40);
      if (0 < iVar3) {
        iVar3 = 0;
        do {
          uVar5 = FUN_100885620(local_40,iVar3);
          iVar4 = FUN_100885600(uVar5);
          iVar7 = 0;
          if (0 < iVar4) {
            do {
              lVar6 = FUN_100885620(uVar5,iVar7);
              *(int *)(lVar6 + 0x10) = iVar3;
              iVar4 = FUN_1008852e0(*puVar2,lVar6);
              if (iVar4 == 0) goto LAB_1008a0f0a;
              iVar7 = iVar7 + 1;
              iVar4 = FUN_100885600(uVar5);
            } while (iVar7 < iVar4);
          }
          FUN_100884dd0(uVar5);
          iVar3 = iVar3 + 1;
          iVar4 = FUN_100885600(local_40);
        } while (iVar3 < iVar4);
      }
      FUN_100884dd0();
      uVar5 = FUN_1008a1250(puVar2);
      if ((int)uVar5 != 0) {
        *(undefined4 *)(puVar2 + 1) = 0;
        *param_1 = (long)puVar2;
        *param_2 = local_38;
        return uVar5;
      }
    }
    if (puVar2 != (undefined8 *)0x0) {
LAB_1008a0f0a:
      FUN_1008a4c40(puVar2,&DAT_100be16c0);
    }
    FUN_100887ce0(0xd,0x9e,0x3a,"x_name.c",0xec);
    uVar5 = 0;
  }
  return uVar5;
}

