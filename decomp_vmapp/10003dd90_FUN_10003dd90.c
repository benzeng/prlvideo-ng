
void FUN_10003dd90(undefined8 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  param_2[2] = 0xffffff9a;
  if (param_2[1] == 3) {
    switch(*param_2) {
    case 100:
      FUN_10003ded0(param_1,param_2,1);
      break;
    case 0x65:
      FUN_10003ded0(param_1,param_2,0);
      break;
    case 0x66:
      FUN_10003dfa0(param_1,param_2);
      break;
    case 0x67:
      FUN_10003e2f0(param_1,param_2);
      break;
    case 0x68:
      FUN_10003e550(param_1,param_2);
      break;
    case 0x69:
      FUN_10003e870(param_1,param_2);
      break;
    default:
      param_2[2] = 0xffffff9b;
      uVar1 = ___cxa_allocate_exception(0x60);
      FUN_100516ad0(uVar1,"../Tools/SharedHostApplications/Host/WinMicroApp.cpp",0x117,
                    "unknown command type",DAT_100b463c0);
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(uVar1,&PTR_vtable_100bc4810,FUN_100516cd0);
    }
  }
  else {
    *(byte *)((long)param_2 + 0xf) = *(byte *)((long)param_2 + 0xf) | 0x40;
    param_2[4] = 0;
  }
  return;
}

