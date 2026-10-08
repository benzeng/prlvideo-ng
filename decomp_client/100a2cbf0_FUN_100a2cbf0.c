
void FUN_100a2cbf0(undefined8 param_1,undefined8 *param_2)

{
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined1 *local_48;
  undefined1 *puStack_40;
  undefined1 *local_38;
  
  lVar3 = _CFStringGetLength();
  lVar4 = _CFStringGetCharactersPtr(param_1);
  if (lVar4 != 0) {
    FUN_100a29610(param_2,lVar4,lVar4 + lVar3 * 2);
    return;
  }
  uVar2 = lVar3 * 2;
  local_48 = (undefined1 *)0x0;
  puStack_40 = (undefined1 *)0x0;
  local_38 = (undefined1 *)0x0;
  if (uVar2 != 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    local_48 = operator_new(uVar2);
    local_38 = local_48 + uVar2;
    lVar4 = lVar3 * -2;
    puStack_40 = local_48;
    do {
      *puStack_40 = 0;
      puStack_40 = puStack_40 + 1;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0);
  }
  _CFStringGetCharacters(param_1,0,lVar3,local_48);
  pvVar1 = (void *)*param_2;
  *param_2 = local_48;
  param_2[1] = puStack_40;
  param_2[2] = local_38;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
  }
  return;
}

