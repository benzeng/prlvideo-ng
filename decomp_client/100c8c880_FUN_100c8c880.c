
undefined8
FUN_100c8c880(undefined8 param_1,undefined4 param_2,int param_3,void *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  void *pvVar4;
  long lVar5;
  undefined8 uVar6;
  long local_38;
  
  local_38 = 0;
  puVar3 = (undefined8 *)FUN_100c7fb90(&DAT_102253260);
  if (puVar3 == (undefined8 *)0x0) {
    FUN_100c62ee0(0xd,0xd7,0x41,"p5_pbe.c",0x56);
    goto LAB_100c8ca08;
  }
  lVar5 = 0x800;
  if (0 < param_3) {
    lVar5 = (long)param_3;
  }
  iVar1 = FUN_100c76820(puVar3[1],lVar5);
  if (iVar1 == 0) {
    uVar6 = 0x5c;
LAB_100c8c9f4:
    FUN_100c62ee0(0xd,0xd7,0x41,"p5_pbe.c",uVar6);
  }
  else {
    iVar1 = 8;
    if (param_5 != 0) {
      iVar1 = param_5;
    }
    iVar2 = FUN_100c8b0b0(*puVar3,0,iVar1);
    if (iVar2 == 0) {
      uVar6 = 0x62;
      goto LAB_100c8c9f4;
    }
    pvVar4 = (void *)FUN_100c8b540(*puVar3);
    if (param_4 != (void *)0x0) {
      _memcpy(pvVar4,param_4,(long)iVar1);
LAB_100c8c98a:
      lVar5 = FUN_100c8c6c0(puVar3,&DAT_102253260,&local_38);
      if (lVar5 != 0) {
        FUN_100c801c0(puVar3,&DAT_102253260);
        uVar6 = FUN_100bf6fe0(param_2);
        iVar1 = FUN_100c7aec0(param_1,uVar6,0x10,local_38);
        if (iVar1 != 0) {
          return 1;
        }
        goto LAB_100c8ca08;
      }
      uVar6 = 0x6c;
      goto LAB_100c8c9f4;
    }
    iVar1 = FUN_100c62190(pvVar4,iVar1);
    if (-1 < iVar1) goto LAB_100c8c98a;
  }
  FUN_100c801c0(puVar3,&DAT_102253260);
LAB_100c8ca08:
  if (local_38 != 0) {
    FUN_100c8b2f0();
  }
  return 0;
}

