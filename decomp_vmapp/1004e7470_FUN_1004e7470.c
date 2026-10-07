
void FUN_1004e7470(long param_1,undefined8 param_2)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 local_30;
  undefined4 local_28 [2];
  
  local_28[0] = *(undefined4 *)(*(long *)(param_1 + 0x40) + 4);
  if (param_1 != 0) {
    puVar4 = (undefined8 *)(param_1 + 0x40);
    FUN_100040e10(param_2,3,local_28,4);
    puVar2 = (uint *)*puVar4;
    if (1 < *puVar2) {
      FUN_1004ebd10(puVar4);
      puVar2 = (uint *)*puVar4;
    }
    if (*(long *)(puVar2 + 4) == 0) {
      puVar1 = puVar2 + 2;
    }
    else {
      puVar1 = *(uint **)(puVar2 + 8);
    }
    while( true ) {
      if (1 < *puVar2) {
        FUN_1004ebd10(puVar4);
        puVar2 = (uint *)*puVar4;
      }
      if (puVar1 == puVar2 + 2) break;
      FUN_1004e6e90(*(undefined8 *)(puVar1 + 8),param_2);
      puVar1 = (uint *)QMapNodeBase::nextNode();
      puVar2 = (uint *)*puVar4;
    }
    return;
  }
  uVar3 = ___cxa_allocate_exception(0x10);
  local_30 = QString::fromAscii_helper("Incorrect pointer",0x11);
  FUN_1004eb830(uVar3,&local_30);
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(uVar3,&PTR_vtable_10111cdf0,FUN_1004eb5a0);
}

