
int FUN_10080a050(undefined4 *param_1)

{
  long lVar1;
  int iVar2;
  code *pcVar3;
  undefined2 local_1a;
  
  lVar1 = *(long *)(param_1 + 0x20);
  *(undefined4 *)(lVar1 + 0x1d4) = 0;
  local_1a = *(undefined2 *)(lVar1 + 0x1d8);
  iVar2 = FUN_100809d30(param_1,0x15,&local_1a,2,0);
  if (iVar2 < 1) {
    *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x1d4) = 1;
  }
  else {
    if (*(char *)(*(long *)(param_1 + 0x20) + 0x1d8) == '\x02') {
      FUN_10087db60(*(undefined8 *)(param_1 + 6),0xb,0,0);
    }
    if (*(code **)(param_1 + 0x26) != (code *)0x0) {
      (**(code **)(param_1 + 0x26))
                (1,*param_1,0x15,*(long *)(param_1 + 0x20) + 0x1d8,2,param_1,
                 *(undefined8 *)(param_1 + 0x28));
    }
    pcVar3 = *(code **)(param_1 + 0x54);
    if ((pcVar3 != (code *)0x0) ||
       (pcVar3 = *(code **)(*(long *)(param_1 + 0x5c) + 0x108), pcVar3 != (code *)0x0)) {
      (*pcVar3)(param_1,0x4008,
                CONCAT11(*(undefined1 *)(*(long *)(param_1 + 0x20) + 0x1d8),
                         *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x1d9)));
    }
  }
  return iVar2;
}

