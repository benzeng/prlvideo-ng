
/* Function Stack Size: 0x18 bytes */

void ShiftDetector::handleSysTimeChanged_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long local_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = _mutex + param_1;
  FUN_1007eaef0();
  local_40 = FUN_1007eaf60();
  FUN_1007eb1f0(&local_48);
  lVar4 = local_48;
  lVar3 = _lastTime;
  lVar2 = _lastTicks;
  lVar1 = *(long *)(param_1 + _lastTime);
  lVar5 = FUN_1007eaf70(&local_40,*(undefined8 *)(param_1 + _lastTicks));
  *(long *)(param_1 + _accumulatedShiftMS) =
       *(long *)(param_1 + _accumulatedShiftMS) + ((lVar4 - lVar1) - lVar5);
  *(long *)(param_1 + lVar3) = local_48;
  *(undefined8 *)(param_1 + lVar2) = local_40;
  FUN_1007eaf10(&local_38);
  return;
}

