
undefined8 FUN_1001283c0(int param_1)

{
  if (param_1 < 0x7e7) {
    if (param_1 < 0x40b) {
      if (param_1 == 0x3ec) {
        return 0xd;
      }
      if (param_1 == 0x3ed) {
        return 0xb;
      }
    }
    else {
      if (param_1 == 0x40b) {
        return 0x1f;
      }
      if (param_1 == 0x41e) {
        return 0xb;
      }
    }
  }
  else if (param_1 < 0x81e) {
    switch(param_1) {
    case 0x7e7:
    case 0x7e9:
    case 0x7ea:
    case 0x7f1:
      return 0x14;
    case 0x7f7:
      return 0x17;
    case 0x7f9:
      return 0x18;
    case 0x7fd:
      return 9;
    case 0x800:
      return 10;
    case 0x803:
      return 1;
    case 0x806:
      return 2;
    case 0x807:
      return 3;
    case 0x808:
      return 4;
    case 0x809:
      return 5;
    case 0x80a:
      return 6;
    case 0x80b:
      return 7;
    case 0x80c:
      return 8;
    case 0x80e:
      return 0xe;
    case 0x80f:
      return 0xf;
    case 0x810:
      return 0x10;
    case 0x811:
      return 0x11;
    }
  }
  else if (param_1 < 0x829) {
    if (param_1 - 0x820U < 2) {
      return 0x15;
    }
    if (param_1 == 0x81e) {
      return 0x12;
    }
    if (param_1 == 0x81f) {
      return 0x13;
    }
  }
  else if (param_1 < 0x856) {
    if (param_1 < 0x83a) {
      if (param_1 < 0x834) {
        if (param_1 == 0x829) {
          return 0x16;
        }
        if (param_1 == 0x82b) {
          return 0x19;
        }
      }
      else {
        if (param_1 == 0x834) {
          return 0x1a;
        }
        if (param_1 == 0x837) {
          return 0x1b;
        }
      }
    }
    else if (param_1 < 0x83d) {
      if (param_1 == 0x83a) {
        return 0x1c;
      }
      if (param_1 == 0x83b) {
        return 0x1e;
      }
    }
    else {
      if (param_1 == 0x83d) {
        return 0x14;
      }
      if (param_1 == 0x845) {
        return 0x20;
      }
    }
  }
  else {
    if (param_1 - 0x856U < 2) {
      return 0x14;
    }
    if (param_1 == 0x86c) {
      return 0x14;
    }
    if (param_1 == 0x87d) {
      return 0xd;
    }
  }
  return 10000;
}

