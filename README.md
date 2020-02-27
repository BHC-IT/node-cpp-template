# Project tree
```
 WASM
 |-- addon //contain .cpp & .h files
 |-- bindings //contain .ts file that wrap directly from cpp
 |-- scripts // scripts to use the project
 |	|-- build.sh // build the project
 |-- src // source file for the project in .ts
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