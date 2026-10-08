
bool FUN_100c5af90(long param_1,int param_2,undefined8 param_3)

{
  if (param_2 == 0xe) {
    *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x38) = param_3;
  }
  return param_2 == 0xe;
}

