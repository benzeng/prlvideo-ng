
void FUN_100ca0b50(undefined4 *param_1,undefined4 param_2,undefined8 param_3)

{
  switch(param_2) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    *(undefined8 *)(param_1 + 2) = param_3;
  }
  *param_1 = param_2;
  return;
}

