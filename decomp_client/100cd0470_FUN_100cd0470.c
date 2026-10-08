
bool FUN_100cd0470(long param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  
  if (param_2 == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = false;
    lVar1 = ___dynamic_cast(param_2,&PTR_vtable_10225a1a0,&PTR_vtable_102259a60,0);
    if (lVar1 != 0) {
      if (*(int *)(param_1 + 0x14) == *(int *)(lVar1 + 0x14)) {
        if (*(int *)(param_1 + 0x18) == *(int *)(lVar1 + 0x18)) {
          if (*(int *)(param_1 + 0x1c) == *(int *)(lVar1 + 0x1c)) {
            bVar2 = *(int *)(param_1 + 0x58) == *(int *)(lVar1 + 0x58);
          }
          else {
            bVar2 = false;
          }
        }
        else {
          bVar2 = false;
        }
      }
      else {
        bVar2 = false;
      }
    }
  }
  return bVar2;
}

