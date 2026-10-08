
undefined8 FUN_100218800(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  cVar1 = COsInstallationInfo::load();
  if (cVar1 == '\0') {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t load OS installation info.");
    uVar3 = 0x80000009;
  }
  else {
    uVar3 = 0;
    uVar2 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
    }
    FUN_10018bcf0(uVar2,1);
  }
  return uVar3;
}

