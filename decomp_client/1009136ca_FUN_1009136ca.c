
void FUN_1009136ca(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined4 local_c;
  
  if (**(char **)(param_1 + 8) == '.') {
    if (*(long *)(param_1 + 0x30) == 0) {
      uVar2 = FUN_10090c33e(param_1,6);
      *(undefined8 *)(param_1 + 0x30) = uVar2;
    }
    else if (*(int *)(*(long *)(param_1 + 0x30) + 4) == 3) {
      FUN_10090d45f(param_1,*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x14),6,0,0,0)
      ;
    }
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
  }
  else if (**(char **)(param_1 + 8) == '\\') {
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
    uVar1 = (uint)**(byte **)(param_1 + 8);
    if (uVar1 == 0x70) {
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
      if (**(char **)(param_1 + 8) == '{') {
        *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
        FUN_100912ec6(param_1);
        if (**(char **)(param_1 + 8) == '}') {
          *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
        }
        else {
          *(undefined4 *)(param_1 + 0x10) = 0x5aa;
          FUN_10090b6dd(param_1,"Expecting \'}\'");
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x10) = 0x5aa;
        FUN_10090b6dd(param_1,"Expecting \'{\'");
      }
    }
    else if (uVar1 == 0x50) {
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
      if (**(char **)(param_1 + 8) == '{') {
        *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
        FUN_100912ec6(param_1);
        *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x28) = 1;
        if (**(char **)(param_1 + 8) == '}') {
          *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
        }
        else {
          *(undefined4 *)(param_1 + 0x10) = 0x5aa;
          FUN_10090b6dd(param_1,"Expecting \'}\'");
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x10) = 0x5aa;
        FUN_10090b6dd(param_1,"Expecting \'{\'");
      }
    }
    else if ((((((((uVar1 == 0x6e) || (uVar1 == 0x72)) || (uVar1 == 0x74)) ||
                ((uVar1 == 0x5c || (uVar1 == 0x7c)))) || (uVar1 == 0x2e)) ||
              (((uVar1 == 0x3f || (uVar1 == 0x2a)) ||
               ((uVar1 == 0x2b || (((uVar1 == 0x28 || (uVar1 == 0x29)) || (uVar1 == 0x7b)))))))) ||
             ((uVar1 == 0x7d || (uVar1 == 0x2d)))) ||
            ((uVar1 == 0x5b || ((uVar1 == 0x5d || (uVar1 == 0x5e)))))) {
      if (*(long *)(param_1 + 0x30) == 0) {
        uVar2 = FUN_10090c33e(param_1,2);
        *(undefined8 *)(param_1 + 0x30) = uVar2;
        if (*(long *)(param_1 + 0x30) != 0) {
          if (uVar1 == 0x72) {
            *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x2c) = 0xd;
          }
          else if (uVar1 == 0x74) {
            *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x2c) = 9;
          }
          else if (uVar1 == 0x6e) {
            *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x2c) = 10;
          }
          else {
            *(uint *)(*(long *)(param_1 + 0x30) + 0x2c) = uVar1;
          }
        }
      }
      else if (*(int *)(*(long *)(param_1 + 0x30) + 4) == 3) {
        FUN_10090d45f(param_1,*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x14),2,
                      uVar1,uVar1,0);
      }
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
    }
    else if (((((uVar1 == 0x73) || (uVar1 == 0x53)) || (uVar1 == 0x69)) ||
             (((uVar1 == 0x49 || (uVar1 == 99)) ||
              ((uVar1 == 0x43 || ((uVar1 == 100 || (uVar1 == 0x44)))))))) ||
            ((uVar1 == 0x77 || (uVar1 == 0x57)))) {
      local_c = 7;
      switch(uVar1) {
      case 0x43:
        local_c = 0xc;
        break;
      case 0x44:
        local_c = 0xe;
        break;
      case 0x49:
        local_c = 10;
        break;
      case 0x53:
        local_c = 8;
        break;
      case 0x57:
        local_c = 0x10;
        break;
      case 99:
        local_c = 0xb;
        break;
      case 100:
        local_c = 0xd;
        break;
      case 0x69:
        local_c = 9;
        break;
      case 0x73:
        local_c = 7;
        break;
      case 0x77:
        local_c = 0xf;
      }
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
      if (*(long *)(param_1 + 0x30) == 0) {
        uVar2 = FUN_10090c33e(param_1,local_c);
        *(undefined8 *)(param_1 + 0x30) = uVar2;
      }
      else if (*(int *)(*(long *)(param_1 + 0x30) + 4) == 3) {
        FUN_10090d45f(param_1,*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x14),
                      local_c,0,0,0);
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = 0x5aa;
    FUN_10090b6dd(param_1,"Escaped sequence: expecting \\");
  }
  return;
}

