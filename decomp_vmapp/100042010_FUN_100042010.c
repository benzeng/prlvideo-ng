
long * FUN_100042010(long *param_1,long param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  string local_48;
  undefined1 local_47 [15];
  undefined1 *local_38;
  
  plVar3 = (long *)0x0;
  if (param_1 != (long *)0x0) {
    lVar4 = *(long *)(param_5 + 0x18) - (param_4 - param_2);
    lVar2 = 0;
    if (lVar4 != 0 && param_4 - param_2 <= *(long *)(param_5 + 0x18)) {
      lVar2 = lVar4;
    }
    lVar4 = param_3 - param_2;
    if ((0 < lVar4) &&
       (lVar1 = (**(code **)(*param_1 + 0x60))(param_1,param_2,lVar4), lVar1 != lVar4)) {
      return (long *)0x0;
    }
    if (0 < lVar2) {
      std::string::__init((ulong)&local_48,(char)lVar2);
      if (((byte)local_48 & 1) == 0) {
        local_38 = local_47;
      }
      lVar4 = (**(code **)(*param_1 + 0x60))(param_1,local_38,lVar2);
      std::string::~string(&local_48);
      if (lVar4 != lVar2) {
        return (long *)0x0;
      }
    }
    param_4 = param_4 - param_3;
    if ((0 < param_4) &&
       (lVar2 = (**(code **)(*param_1 + 0x60))(param_1,param_3,param_4), lVar2 != param_4)) {
      return (long *)0x0;
    }
    *(undefined8 *)(param_5 + 0x18) = 0;
    plVar3 = param_1;
  }
  return plVar3;
}

