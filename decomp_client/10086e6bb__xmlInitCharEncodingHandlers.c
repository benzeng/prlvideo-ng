
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _xmlInitCharEncodingHandlers(void)

{
  char local_12 [2];
  char *local_10;
  
  local_12[0] = '4';
  local_12[1] = '\x12';
  local_10 = local_12;
  if (DAT_102312460 == 0) {
    DAT_102312460 = (*(code *)_xmlMalloc)(400);
    if (*local_10 == '\x12') {
      DAT_102275848 = 0;
    }
    else if (*local_10 == '4') {
      DAT_102275848 = 1;
    }
    else {
      FUN_10086bdce(1,"Odd problem at endianness detection\n",0);
    }
    if (DAT_102312460 == 0) {
      FUN_10086bda0("xmlInitCharEncodingHandlers : out of memory !\n");
    }
    else {
      _xmlNewCharEncodingHandler("UTF-8",FUN_10086c420,FUN_10086c420);
      DAT_102312440 = _xmlNewCharEncodingHandler("UTF-16LE",FUN_10086c783,FUN_10086caa7);
      DAT_102312448 = _xmlNewCharEncodingHandler("UTF-16BE",FUN_10086cede,FUN_10086d210);
      _xmlNewCharEncodingHandler("UTF-16",FUN_10086c783,FUN_10086ce4c);
      _xmlNewCharEncodingHandler("ISO-8859-1",_isolat1ToUTF8,_UTF8Toisolat1);
      _xmlNewCharEncodingHandler("ASCII",FUN_10086be69,FUN_10086bfcb);
      _xmlNewCharEncodingHandler("US-ASCII",FUN_10086be69,FUN_10086bfcb);
      _xmlNewCharEncodingHandler("HTML",(xmlCharEncodingInputFunc)0x0,_UTF8ToHtml);
      FUN_10087063a();
    }
  }
  return;
}

