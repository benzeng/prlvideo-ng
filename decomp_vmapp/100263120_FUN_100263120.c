
void FUN_100263120(long *param_1)

{
  long lVar1;
  undefined1 local_40 [31];
  undefined1 local_21;
  
  *(undefined1 *)(param_1 + 0x25) = 1;
  if ((char)param_1[0x25] != '\0') {
    do {
      (**(code **)(*param_1 + 0x20))(param_1,local_40);
      (**(code **)(*(long *)param_1[3] + 0x28))((long *)param_1[3],local_40);
      lVar1 = (**(code **)(*param_1 + 0x10))(param_1,&local_21,1);
      if (lVar1 != 0) {
        (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],&local_21,1);
      }
    } while ((char)param_1[0x25] != '\0');
  }
  return;
}

