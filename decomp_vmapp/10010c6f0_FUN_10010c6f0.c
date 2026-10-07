
void FUN_10010c6f0(long param_1,QString *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long *local_78 [6];
  undefined1 local_48 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  FUN_1007d6870(local_48);
  FUN_10078c8e0(local_78,param_3);
  cVar2 = FUN_10078c9b0(local_78,0x2001,local_48);
  if (cVar2 == '\0') {
    puVar5 = (undefined4 *)___cxa_allocate_exception(4);
    *puVar5 = 0;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar5,&PTR_vtable_100ba9298,0);
  }
  if (local_78[0] != (long *)0x0) {
    LOCK();
    plVar1 = local_78[0] + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)(*local_78[0] + 0x10))();
    }
  }
  puVar4 = *(uint **)(param_1 + 0x18);
  if (0 < (int)(puVar4[3] - puVar4[2])) {
    puVar10 = (undefined8 *)(param_1 + 0x18);
    uVar9 = (long)(int)(puVar4[3] - puVar4[2]);
    while( true ) {
      uVar8 = uVar9 - 1;
      if (1 < *puVar4) {
        FUN_10010d310(puVar10,puVar4[1]);
        puVar4 = (uint *)*puVar10;
      }
      lVar7 = 0;
      if (**(long **)(puVar4 + ((long)(int)puVar4[2] + uVar8) * 2 + 4) != 0) {
        lVar7 = *(long *)(**(long **)(puVar4 + ((long)(int)puVar4[2] + uVar8) * 2 + 4) + 0x10);
      }
      cVar2 = operator==((QString *)(lVar7 + 8),param_2);
      if ((cVar2 != '\0') && (iVar3 = FUN_1007ea6f0(lVar7 + 0x18,local_48), iVar3 == 0)) break;
      if ((long)uVar9 < 2) goto LAB_10010c8da;
      puVar4 = (uint *)*puVar10;
      uVar9 = uVar8;
    }
    uVar6 = FUN_100097990(DAT_1011c3698);
    FUN_100108390(uVar6,lVar7 + 0x10);
    FUN_10010cbb0(puVar10,uVar8 & 0xffffffff);
  }
LAB_10010c8da:
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

