
undefined8
FUN_1008b1300(undefined8 param_1,undefined4 param_2,int param_3,void *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  void *pvVar4;
  long lVar5;
  undefined8 uVar6;
  long local_38;
  
  local_38 = 0;
  puVar3 = (undefined8 *)FUN_1008a4610(&DAT_100be2c50);
  if (puVar3 == (undefined8 *)0x0) {
    FUN_100887ce0(0xd,0xd7,0x41,"p5_pbe.c",0x56);
    goto LAB_1008b1488;
  }
  lVar5 = 0x800;
  if (0 < param_3) {
    lVar5 = (long)param_3;
  }
  iVar1 = FUN_10089b2a0(puVar3[1],lVar5);
  if (iVar1 == 0) {
    uVar6 = 0x5c;
LAB_1008b1474:
    FUN_100887ce0(0xd,0xd7,0x41,"p5_pbe.c",uVar6);
  }
  else {
    iVar1 = 8;
    if (param_5 != 0) {
      iVar1 = param_5;
    }
    iVar2 = FUN_1008afb30(*puVar3,0,iVar1);
    if (iVar2 == 0) {
      uVar6 = 0x62;
      goto LAB_1008b1474;
    }
    pvVar4 = (void *)FUN_1008affc0(*puVar3);
    if (param_4 != (void *)0x0) {
      _memcpy(pvVar4,param_4,(long)iVar1);
LAB_1008b140a:
      lVar5 = FUN_1008b1140(puVar3,&DAT_100be2c50,&local_38);
      if (lVar5 != 0) {
        FUN_1008a4c40(puVar3,&DAT_100be2c50);
        uVar6 = FUN_100821870(param_2);
        iVar1 = FUN_10089f940(param_1,uVar6,0x10,local_38);
        if (iVar1 != 0) {
          return 1;
        }
        goto LAB_1008b1488;
      }
      uVar6 = 0x6c;
      goto LAB_1008b1474;
    }
    iVar1 = FUN_100886f90(pvVar4,iVar1);
    if (-1 < iVar1) goto LAB_1008b140a;
  }
  FUN_1008a4c40(puVar3,&DAT_100be2c50);
LAB_1008b1488:
  if (local_38 != 0) {
    FUN_1008afd70();
  }
  return 0;
}

