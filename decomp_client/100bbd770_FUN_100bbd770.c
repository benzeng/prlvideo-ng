
void FUN_100bbd770(void *param_1)

{
  int iVar1;
  long lVar2;
  long *ptr;
  long *ptr_00;
  
  if ((param_1 != (void *)0x0) &&
     (iVar1 = *(int *)((long)param_1 + 0x30), *(int *)((long)param_1 + 0x30) = iVar1 + -1, iVar1 < 2
     )) {
    ptr_00 = *(long **)((long)param_1 + 0x20);
    if (ptr_00 != (long *)0x0) {
      ptr = (long *)*ptr_00;
      if (ptr != (long *)0x0) {
        do {
          ptr_00 = ptr_00 + 1;
          lVar2 = *ptr;
          if (*(code **)(lVar2 + 0x58) == (code *)0x0) {
            if ((lVar2 != 0) && (*(code **)(lVar2 + 0x50) != (code *)0x0)) {
              (**(code **)(lVar2 + 0x50))(ptr);
            }
          }
          else {
            (**(code **)(lVar2 + 0x58))(ptr);
          }
          _OPENSSL_cleanse(ptr,0x58);
          FUN_100bf3910(ptr);
          ptr = (long *)*ptr_00;
        } while (ptr != (long *)0x0);
        ptr_00 = *(long **)((long)param_1 + 0x20);
      }
      _OPENSSL_cleanse(ptr_00,8);
      FUN_100bf3910(*(undefined8 *)((long)param_1 + 0x20));
    }
    _OPENSSL_cleanse(param_1,8);
    FUN_100bf3910(param_1);
    return;
  }
  return;
}

