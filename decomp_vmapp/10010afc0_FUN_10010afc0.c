
void FUN_10010afc0(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  long *local_40;
  undefined1 local_38 [32];
  
  FUN_10004e310(local_38,0x20);
  puVar5 = (undefined8 *)FUN_10078cc60(local_38);
  *puVar5 = 0x100000001;
  puVar5[3] = 0;
  puVar5[2] = 0;
  puVar5[1] = 0;
  uVar6 = FUN_10010b270(local_38,0,0x10,0x2001);
  FUN_1007ea6d0(param_1 + 0x18,uVar6);
  uVar6 = FUN_10078cc60(local_38);
  uVar3 = FUN_10078cc70(local_38);
  FUN_100791380(&local_40,0x18980,0,uVar6,uVar3,&DAT_1011ccb98,1);
  uVar4 = FUN_100433970(*(undefined8 *)(DAT_1011c3698 + 0xf0),param_1 + 8,&local_40,1);
  if ((uVar4 | 2) == 2) {
    if (local_40 != (long *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar2 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)(*local_40 + 0x10))();
      }
    }
    FUN_10078cf00(local_38);
    return;
  }
  if (2 < DAT_1011b55f8) {
    FUN_1008e3970("CVSRC","vm",3,"Package send err %i, type=%u",uVar4,
                  *(undefined4 *)(local_40[2] + 0x40));
  }
  puVar7 = (undefined4 *)___cxa_allocate_exception(4);
  *puVar7 = 1;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar7,&PTR_vtable_100ba9238,0);
}

