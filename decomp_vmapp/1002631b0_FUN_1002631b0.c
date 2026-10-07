
void FUN_1002631b0(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined1 local_40 [31];
  undefined1 local_21;
  
  *(undefined1 *)(param_1 + 0x120) = 1;
  if (*(char *)(param_1 + 0x120) != '\0') {
    plVar2 = (long *)(param_1 + -8);
    do {
      (**(code **)(*plVar2 + 0x20))(plVar2,local_40);
      (**(code **)(**(long **)(param_1 + 0x10) + 0x28))(*(long **)(param_1 + 0x10),local_40);
      lVar1 = (**(code **)(*plVar2 + 0x10))(plVar2,&local_21,1);
      if (lVar1 != 0) {
        (**(code **)(**(long **)(param_1 + 0x10) + 0x18))(*(long **)(param_1 + 0x10),&local_21,1);
      }
    } while (*(char *)(param_1 + 0x120) != '\0');
  }
  return;
}

