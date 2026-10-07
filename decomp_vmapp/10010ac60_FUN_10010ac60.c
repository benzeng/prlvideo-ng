
void FUN_10010ac60(long param_1,long *param_2)

{
  long *plVar1;
  char *pcVar2;
  long lVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  size_t sVar9;
  long *local_48;
  undefined1 local_40 [32];
  
  FUN_10004e310(local_40,0x20);
  puVar6 = (undefined8 *)FUN_10078cc60(local_40);
  *puVar6 = 0x100000001;
  puVar6[3] = 0;
  puVar6[2] = 0;
  puVar6[1] = 0;
  uVar7 = FUN_10010b270(local_40,0,0x10,0x2001);
  FUN_1007ea6d0(param_1 + 0x18,uVar7);
  puVar8 = (undefined4 *)FUN_10010b270(local_40,0,0x14,0x2004);
  *puVar8 = (int)param_2[8];
  puVar8[1] = 0x79757673;
  puVar8[2] = **(undefined4 **)(*param_2 + 0x10);
  puVar8[3] = *(undefined4 *)(*(long *)(*param_2 + 0x10) + 8);
  puVar8[4] = *(undefined4 *)(*(long *)(*param_2 + 0x10) + 0x10);
  pcVar2 = (char *)param_2[1];
  sVar9 = _strlen(pcVar2);
  FUN_10004dee0(local_40,pcVar2,sVar9 & 0xffffffff,0x2005);
  puVar8 = (undefined4 *)FUN_10010b270(local_40,0,4,0x2006);
  *puVar8 = *(undefined4 *)(*(long *)(*param_2 + 0x10) + 0x38);
  uVar7 = FUN_10078cc60(local_40);
  uVar4 = FUN_10078cc70(local_40);
  FUN_100791380(&local_48,0x1897f,0,uVar7,uVar4,&DAT_1011ccb98,1);
  uVar5 = FUN_100433970(*(undefined8 *)(DAT_1011c3698 + 0xf0),param_1 + 8,&local_48,1);
  if ((uVar5 | 2) == 2) {
    if (local_48 != (long *)0x0) {
      LOCK();
      plVar1 = local_48 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)(*local_48 + 0x10))();
      }
    }
    FUN_10078cf00(local_40);
    return;
  }
  if (2 < DAT_1011b55f8) {
    FUN_1008e3970("CVSRC","vm",3,"Package send err %i, type=%u",uVar5,
                  *(undefined4 *)(local_48[2] + 0x40));
  }
  puVar8 = (undefined4 *)___cxa_allocate_exception(4);
  *puVar8 = 1;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar8,&PTR_vtable_100ba9238,0);
}

