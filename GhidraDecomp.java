import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.listing.*;
import java.io.*;
import java.util.regex.*;

public class GhidraDecomp extends GhidraScript {
    @Override
    public void run() throws Exception {
        Pattern pat = Pattern.compile("Prl(TgReq|HWC|Ctl|Vesa)");
        String out = "/home/dong/prlvideo-ng/decomp/";
        DecompInterface di = new DecompInterface();
        di.openProgram(currentProgram);
        int n = 0;
        FunctionIterator it = currentProgram.getFunctionManager().getFunctions(true);
        while (it.hasNext()) {
            Function f = it.next();
            String name = f.getName();
            if (!pat.matcher(name).find()) continue;
            DecompileResults r = di.decompileFunction(f, 60, monitor);
            if (r != null && r.decompileCompleted()) {
                String code = r.getDecompiledFunction().getC();
                try (Writer w = new OutputStreamWriter(new FileOutputStream(out + name + ".c"))) {
                    w.write(code);
                }
                n++;
            }
        }
        println("DECOMPILED=" + n);
    }
}
