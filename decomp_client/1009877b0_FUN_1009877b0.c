
void FUN_1009877b0(undefined4 param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined **ppuVar3;
  
  switch(param_1) {
  case 1:
    puVar1 = operator_new(0x18);
    *puVar1 = &PTR_FUN_10227da00;
    ppuVar3 = &PTR_FUN_10227da58;
    break;
  case 2:
    puVar1 = operator_new(0x18);
    *puVar1 = &PTR_FUN_10227dad8;
    ppuVar3 = &PTR_FUN_10227db30;
    break;
  default:
    puVar2 = (undefined4 *)___cxa_allocate_exception(4);
    *puVar2 = 0x80000003;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar2,PTR_typeinfo_1021e1790,0);
  case 4:
    puVar1 = operator_new(0x18);
    *puVar1 = &PTR_FUN_10227db98;
    ppuVar3 = &PTR_FUN_10227dbf0;
    break;
  case 8:
    puVar1 = operator_new(0x18);
    *puVar1 = &PTR_FUN_10227dc58;
    ppuVar3 = &PTR_FUN_10227dcb0;
  }
  puVar1[1] = ppuVar3;
  puVar1[2] = PTR_shared_null_1021e15e8;
  return;
}

