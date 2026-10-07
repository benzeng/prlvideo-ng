
/* Function Stack Size: 0x10 bytes */

ID MacAppDelegate::init(ID param_1,SEL param_2)

{
  ID IVar1;
  ID local_18;
  undefined *local_10;
  
  local_10 = PTR_MacAppDelegate_100bedc70;
  local_18 = param_1;
  IVar1 = NSObject::init((ID)&local_18,PTR_s_init_100bed248);
  if (IVar1 != 0) {
    *(undefined1 *)(IVar1 + needStop) = 0;
  }
  return IVar1;
}

