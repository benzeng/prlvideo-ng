
undefined8 FUN_100dba860(long param_1,undefined4 param_2,undefined1 *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 8);
  if (pcVar1 == (code *)0x0) {
    *param_3 = 1;
    uVar2 = 0;
  }
  else {
    *param_3 = 0;
    uVar2 = (*pcVar1)(param_2,0,0);
  }
  return uVar2;
}

