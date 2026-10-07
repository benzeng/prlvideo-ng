
undefined1 FUN_100274a30(long param_1)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  char *pcVar4;
  char cVar5;
  
  iVar2 = *(int *)(param_1 + 0x1b8);
  cVar5 = '\x01';
  if (((iVar2 == 3) || (cVar5 = (iVar2 == 4) * '\x02', iVar2 == 1)) &&
     (cVar1 = FUN_1007d8a00(param_1 + 0x1ec,0), cVar1 == '\0')) {
    pcVar4 = "[CNetDevice] failed to create pkt_poll_event";
  }
  else {
    plVar3 = (long *)FUN_1006bce50(cVar5);
    *(long **)(param_1 + 0x170) = plVar3;
    if (plVar3 != (long *)0x0) {
      iVar2 = (**(code **)(*plVar3 + 0x18))(plVar3);
      if (iVar2 == 0) {
        return 1;
      }
      FUN_1008e3970("","LocalDevices",0,
                    "[CNetDevice]\terror opening driver! Parallels driver is probably not installed. Error %d"
                   );
      if (*(long **)(param_1 + 0x170) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x170) + 8))();
      }
      *(undefined8 *)(param_1 + 0x170) = 0;
      return 0;
    }
    pcVar4 = "Error: memory allocation failed!";
  }
  FUN_1008e3970("","LocalDevices",0,pcVar4);
  return 0;
}

