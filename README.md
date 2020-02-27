# Project tree
```
 WASM
├── addon //contain .cpp & .h files
│   ├── base.cpp -> base() function
│   ├── base.h -> export base() to global scope
│   └── index.cpp -> expose base() function for nodejs via napi
├── binding.gyp -> configuration file for node-gyp
├── bindings //contain .ts file that wrap from cpp
│   └── base.ts -> wrap base addon for as a ts module
├── nodemon.json -> configuration file for nodemon
├── package.json -> configuration file for npm
├── README.md
├── scripts // scripts to use the project
│   └── build.sh -> build the cpp files of the project
├── src // source file for the project in .ts
│   └── index.ts -> entry point of the bundle
├── test // unitary test
│   ├── base.cpp.test.ts -> test for base() funtion
│   └── index.test.ts -> test of the entrypoint
├── tsconfig.json -> configuration file for typescript
├── typings // type test file
│   ├── globals
│   │   └── mocha
│   │       ├── index.d.ts
│   │       └── typings.json
│   ├── index.d.ts
│   └── modules
│       └── chai
│           ├── index.d.ts
│           └── typings.json
└── typings.json -> configuration file for typing

```

# Command
`npm start`: run the project in prod mode

`npm run dev`: run the project in dev mode with nodemon

`npm run build`: build the project

`npm run clean`: clear the project. delete `dist` && `build` path

`npm run test`: launch unary test

# Dependecies
```bash
npm install -g typings chai mocha ts-node node-gyp
```

lets break that down:

	`typing & chain & mocka` : unitary tests

	`ts-node`: compile typescript code

	`node-gyp`: compile C++ code