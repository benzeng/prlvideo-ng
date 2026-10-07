
uint * FUN_1004666b0(long param_1,uint *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  
  uVar1 = *param_2;
  if (uVar1 == 0xffffffff) {
    puVar6 = (uint *)FUN_100466400(param_1);
    if (puVar6 == (uint *)0x0) {
      puVar7 = (undefined4 *)___cxa_allocate_exception(4);
      *puVar7 = 0xffffffff;
      goto LAB_10046678e;
    }
    *param_2 = *puVar6;
    FUN_100465a50(puVar6,param_2[4]);
  }
  else {
    QMutex::lock();
    puVar2 = *(undefined8 **)(param_1 + 8);
    if (*(uint *)(puVar2 + 4) == 0) {
      puVar9 = (undefined8 *)(param_1 + 8);
    }
    else {
      uVar8 = *(uint *)((long)puVar2 + 0x24) ^ uVar1;
      uVar3 = (ulong)uVar8 % (ulong)*(uint *)(puVar2 + 4);
      puVar4 = *(undefined8 **)(puVar2[1] + uVar3 * 8);
      puVar9 = (undefined8 *)(puVar2[1] + uVar3 * 8);
      while ((puVar5 = puVar4, puVar5 != puVar2 &&
             ((*(uint *)(puVar5 + 1) != uVar8 || (*(uint *)((long)puVar5 + 0xc) != uVar1))))) {
        puVar9 = puVar5;
        puVar4 = (undefined8 *)*puVar5;
      }
    }
    puVar6 = (uint *)0x0;
    if (puVar2 != (undefined8 *)*puVar9) {
      puVar6 = (uint *)((undefined8 *)*puVar9)[2];
    }
    QMutex::unlock();
    if (puVar6 == (uint *)0x0) {
      puVar7 = (undefined4 *)___cxa_allocate_exception(4);
      *puVar7 = 0xfffffffe;
LAB_10046678e:
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(puVar7,&PTR_vtable_10111c540,0);
    }
  }
  return puVar6;
}

