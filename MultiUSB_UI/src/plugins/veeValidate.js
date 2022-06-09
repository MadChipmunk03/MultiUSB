import { extend } from "vee-validate";
import { required } from "vee-validate/dist/rules";

extend("required", {
  ...required,
  message: "Pole je povinné",
});

extend("minmax", {
  validate(value, args) {
    return value <= Number(args.max) && value >= Number(args.min);
  },
  message: "Počet pracovních dní musí být v rozmezí od {min} do {max} (včetně)",
  params: ["min", "max"],
});
