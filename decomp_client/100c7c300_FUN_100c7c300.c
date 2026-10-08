
undefined8
FUN_100c7c300(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
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
  uVar5 = FUN_100c814f0(&local_40,&local_38,param_3,&DAT_102251c60,param_5,param_6,(int)param_7,
                        param_8);
  if (0 < (int)uVar5) {
    puVar2 = (undefined8 *)*param_1;
    if (puVar2 != (undefined8 *)0x0) {
      FUN_100c57f20(puVar2[2]);
      FUN_100c60790(*puVar2,FUN_100c7c190);
      if (puVar2[3] != 0) {
        FUN_100bf3910();
      }
      FUN_100bf3910(puVar2);
      *param_1 = 0;
    }
    iVar3 = FUN_100c7c1d0(&local_48,0);
    puVar2 = local_48;
    if ((iVar3 != 0) &&
       (iVar3 = FUN_100c57f60(local_48[2],(long)local_38 - (long)pvVar1), iVar3 != 0)) {
      _memcpy(*(void **)(puVar2[2] + 8),pvVar1,(long)local_38 - (long)pvVar1);
      iVar3 = FUN_100c60800(local_40);
      if (0 < iVar3) {
        iVar3 = 0;
        do {
          uVar5 = FUN_100c60820(local_40,iVar3);
          iVar4 = FUN_100c60800(uVar5);
          iVar7 = 0;
          if (0 < iVar4) {
            do {
              lVar6 = FUN_100c60820(uVar5,iVar7);
              *(int *)(lVar6 + 0x10) = iVar3;
              iVar4 = FUN_100c604e0(*puVar2,lVar6);
              if (iVar4 == 0) goto LAB_100c7c48a;
              iVar7 = iVar7 + 1;
              iVar4 = FUN_100c60800(uVar5);
            } while (iVar7 < iVar4);
          }
          FUN_100c5ffd0(uVar5);
          iVar3 = iVar3 + 1;
          iVar4 = FUN_100c60800(local_40);
        } while (iVar3 < iVar4);
      }
      FUN_100c5ffd0();
      uVar5 = FUN_100c7c7d0(puVar2);
      if ((int)uVar5 != 0) {
        *(undefined4 *)(puVar2 + 1) = 0;
        *param_1 = (long)puVar2;
        *param_2 = local_38;
        return uVar5;
      }
    }
    if (puVar2 != (undefined8 *)0x0) {
LAB_100c7c48a:
      FUN_100c801c0(puVar2,&DAT_102251cd0);
    }
    FUN_100c62ee0(0xd,0x9e,0x3a,"x_name.c",0xec);
    uVar5 = 0;
  }
  return uVar5;
}

