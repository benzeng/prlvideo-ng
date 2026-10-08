
void FUN_100912ec6(long param_1)

{
  char cVar1;
  byte bVar2;
  xmlChar *cur;
  undefined8 uVar3;
  undefined4 local_1c;
  xmlChar *local_18;
  
  local_18 = (xmlChar *)0x0;
  cVar1 = **(char **)(param_1 + 8);
  if (cVar1 == 'L') {
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
    cVar1 = **(char **)(param_1 + 8);
    if (cVar1 == 'u') {
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
      local_1c = 0x12;
    }
    else if (cVar1 == 'l') {
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
      local_1c = 0x13;
    }
    else if (cVar1 == 't') {
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
      local_1c = 0x14;
    }
    else if (cVar1 == 'm') {
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
      local_1c = 0x15;
    }
    else if (cVar1 == 'o') {
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
      local_1c = 0x16;
    }
    else {
      local_1c = 0x11;
    }
  }
  else if (cVar1 == 'M') {
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
    cVar1 = **(char **)(param_1 + 8);
    if (cVar1 == 'n') {
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
      local_1c = 0x18;
    }
    else if (cVar1 == 'c') {
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
      local_1c = 0x19;
    }
    else if (cVar1 == 'e') {
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
      local_1c = 0x1a;
    }
    else {
      local_1c = 0x17;
    }
  }
  else if (cVar1 == 'N') {
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
    cVar1 = **(char **)(param_1 + 8);
    if (cVar1 == 'd') {
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
      local_1c = 0x1c;
    }
    else if (cVar1 == 'l') {
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
      local_1c = 0x1d;
    }
    else if (cVar1 == 'o') {
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
      local_1c = 0x1e;
    }
    else {
      local_1c = 0x1b;
    }
  }
  else if (cVar1 == 'P') {
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
    cVar1 = **(char **)(param_1 + 8);
    if (cVar1 == 'c') {
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
      local_1c = 0x20;
    }
    else if (cVar1 == 'd') {
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
      local_1c = 0x21;
    }
    else if (cVar1 == 's') {
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
      local_1c = 0x22;
    }
    else if (cVar1 == 'e') {
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
      local_1c = 0x23;
    }
    else if (cVar1 == 'i') {
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
      local_1c = 0x24;
    }
    else if (cVar1 == 'f') {
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
      local_1c = 0x25;
    }
    else if (cVar1 == 'o') {
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
      local_1c = 0x26;
    }
    else {
      local_1c = 0x1f;
    }
  }
  else if (cVar1 == 'Z') {
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
    cVar1 = **(char **)(param_1 + 8);
    if (cVar1 == 's') {
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
      local_1c = 0x28;
    }
    else if (cVar1 == 'l') {
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
      local_1c = 0x29;
    }
    else if (cVar1 == 'p') {
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
      local_1c = 0x2a;
    }
    else {
      local_1c = 0x27;
    }
  }
  else if (cVar1 == 'S') {
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
    cVar1 = **(char **)(param_1 + 8);
    if (cVar1 == 'm') {
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
      local_1c = 0x2c;
    }
    else if (cVar1 == 'c') {
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
      local_1c = 0x2d;
    }
    else if (cVar1 == 'k') {
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
      local_1c = 0x2e;
    }
    else if (cVar1 == 'o') {
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
      local_1c = 0x2f;
    }
    else {
      local_1c = 0x2b;
    }
  }
  else if (cVar1 == 'C') {
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
    cVar1 = **(char **)(param_1 + 8);
    if (cVar1 == 'c') {
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
      local_1c = 0x31;
    }
    else if (cVar1 == 'f') {
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
      local_1c = 0x32;
    }
    else if (cVar1 == 'o') {
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
      local_1c = 0x33;
    }
    else if (cVar1 == 'n') {
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
      local_1c = 0x34;
    }
    else {
      local_1c = 0x30;
    }
  }
  else {
    if (cVar1 != 'I') {
      *(undefined4 *)(param_1 + 0x10) = 0x5aa;
      FUN_10090b6dd(param_1,"Unknown char property");
      return;
    }
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
    if (**(char **)(param_1 + 8) != 's') {
      *(undefined4 *)(param_1 + 0x10) = 0x5aa;
      FUN_10090b6dd(param_1,"IsXXXX expected");
      return;
    }
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
    cur = *(xmlChar **)(param_1 + 8);
    bVar2 = **(byte **)(param_1 + 8);
    if ((((0x60 < bVar2) && (bVar2 < 0x7b)) || ((0x40 < bVar2 && (bVar2 < 0x5b)))) ||
       (((0x2f < bVar2 && (bVar2 < 0x3a)) || (bVar2 == 0x2d)))) {
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
      bVar2 = **(byte **)(param_1 + 8);
      while ((((0x60 < bVar2 && (bVar2 < 0x7b)) || ((0x40 < bVar2 && (bVar2 < 0x5b)))) ||
             (((0x2f < bVar2 && (bVar2 < 0x3a)) || (bVar2 == 0x2d))))) {
        *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
        bVar2 = **(byte **)(param_1 + 8);
      }
    }
    local_1c = 0x35;
    local_18 = _xmlStrndup(cur,(int)*(undefined8 *)(param_1 + 8) - (int)cur);
  }
  if (*(long *)(param_1 + 0x30) == 0) {
    uVar3 = FUN_10090c33e(param_1,local_1c);
    *(undefined8 *)(param_1 + 0x30) = uVar3;
    if (*(long *)(param_1 + 0x30) != 0) {
      *(xmlChar **)(*(long *)(param_1 + 0x30) + 0x18) = local_18;
    }
  }
  else if (*(int *)(*(long *)(param_1 + 0x30) + 4) == 3) {
    FUN_10090d45f(param_1,*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x14),local_1c,0
                  ,0,local_18);
  }
  return;
}

